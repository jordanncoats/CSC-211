#include <assert.h>
#include "dynarray.h"

dynarray dynarray_new(int length) {
  dynarray dynObj;
  dynObj.length = length;
  dynObj.space = length;
  dynObj.contents = new int[length];
  for(int i = 0; i < length; i++){
    dynObj.contents[i] = 0;
  }
  return dynObj;
}

dynarray dynarray_new(int source[], int length) {
  dynarray dynObj = dynarray_new(length);
  for(int i = 0; i < length; i++){
    dynObj.contents[i] = source[i];
  }
  return dynObj;
}

int dynarray_length(dynarray *arr) {
  return arr->length;
}

void dynarray_append(dynarray *arr, int val) {
    if(arr->length == arr->space){
        int space = arr->space * 2;
        int *a = new int[space];
        for (int i = 0; i < arr->length; i++){
            a[i] = arr->contents[i];
        }
        delete [] arr->contents;
        arr->contents = a;
        arr->contents[arr->length] = val;
        arr->length++;
    }else{
        arr->contents[arr->length] = val;
        arr->length++;
    }
}

int dynarray_get(dynarray *arr, int idx) {
  return arr -> contents[idx];
}

void dynarray_set(dynarray *arr, int idx, int val) {
  arr->contents[idx] = val;
}

int *dynarray_at(dynarray *arr, int idx) {
  return &arr -> contents[idx];
}

dynarray dynarray_slice(dynarray *arr, int start, int len) {
  dynarray dynObj=dynarray_new(len);
  for(int i = 0; i < len; i++){
    dynObj.contents[i] = arr->contents[start+i];
  }
  return dynObj;
}
