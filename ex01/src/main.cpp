#include "../inc/iter.hpp"

#include <string>
#include <iostream>

void putA(char& loc)
{
	loc = 'A';
}

int main(void)
{
	const int length = 12;
	char test[length + 1];
	test[length] = '\0';
	::iter<char>(test, length, putA);
	std::cout << test << std::endl;

	std::string strArr[] = {"Hot", "cold", "mellow"};
	::iter(strArr, 3, ::uselessPrinter);
}
