#include <stdio.h>
#include <iostream>

int mystrlen(char str[]) {
	int i = 0;
	while (str[i]!='\0')
		{
			i++;
		}
	return i;
}

int main() {
	char str[100];
	std::cin >> str;
	std::cout << mystrlen(str);
}