#include <stdio.h>
#include <iostream>

int mystrnlen(char str[], int j) {
	int i = 0;
	while (str[i]!='\0' & j > i)
		{
			i++;
		}
	return i;
}

int main() {
	char str[100];
	std::cin >> str;
	std::cout << mystrnlen(str, 50);
}