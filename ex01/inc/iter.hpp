#pragma once
#include <iostream>

template <typename T>
void iter(T* ptr, const int length,void (*f)(T&))
{
	for (int i = 0; i < length; i++)
	{
		f(ptr[i]);
	}
};

template <typename T>
void uselessPrinter(T toPrint)
{
	std::cout << toPrint << std::endl;
}
