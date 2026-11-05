#pragma once
//#include "Array.tpp"

#include <stdexcept>
#include <aio.h>

template <typename T>
class Array
{
	public :
		Array(size_t size = 0) : _data(nullptr), _size(size){
			_data = new T[_size];
		}
		Array(const Array& other) : _data(nullptr), _size(0){
			_size = other._size;
			_data = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_data[i] = other._data[i];
		}
		Array operator=(const Array& other){
			if (this != &other){
				T* new_data = new T[other._size];
				for (size_t i = 0; i < other._size; i++)
					new_data[i] = other._data[i];
				delete[] _data;
				_size = other._size;
				_data = new_data;
			}
			return (*this);
		}
		~Array(){
			delete[] _data;
		}

		T operator[](size_t i) const{
			if (i >= _size)
				throw (std::out_of_range("Out of range"));
			return (_data[i]);
		}
		T& operator[](size_t i){
			if (i >= _size)
				throw (std::out_of_range("Out of range"));
			return (_data[i]);
		}
		size_t size() const{
			return (_size);
		}
	private :
		T* _data;
		size_t _size;
};
