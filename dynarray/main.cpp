#include <iostream>
#include "dynarray.h"

int main() {
	int test[] = {1, 2, 3, 4, 5};
    dynarray a = dynarray_new(test, 5);
	std::cout << dynarray_get(&a, 2) << " should be 3" << std::endl;
	dynarray s = dynarray_slice(&a, 2, 2);
	std::cout << dynarray_length(&s) << " should be 2" << std::endl;
	for (int i=0; i < dynarray_length(&a); i++) {
		std::cout << *(dynarray_at(&a, i)) << std::endl;
	}
	std::cout << "Slice Test" << std::endl;
	for (int i=0; i < dynarray_length(&s); i++) {
		std::cout << *(dynarray_at(&s, i)) << std::endl;
	}
}
