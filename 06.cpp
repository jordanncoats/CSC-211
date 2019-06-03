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