#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array
{

	public:

		Array();
		Array(unsigned int n);
		Array( Array const & src );
		~Array();

		Array &		operator=( Array const & rhs );
		T	& operator[](unsigned int index);

	class outOfBound : public std::exception
	{
		public:
			outOfBound() throw() {}
			virtual ~outOfBound() throw() {}
			virtual const char * what() const throw()
			{
				return ("Element out of bound\n");
			}
	};
	
	unsigned int size(void) const;

	private:
		T * _array;
		unsigned int _size;
};


//std::ostream &			operator<<( std::ostream & o, Array<T> const & i );

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
Array<T>::Array() : _array(NULL) , _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::Array( const Array & src )
{
	if(src._size > 0)
	{
		this->_array = new T[src._size];
		this->_size = src._size;
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}
}

template <typename T>
T	& Array<T>::operator[](unsigned int index)
{
	if(index >= 0)
	{
		if(index >= _size)
		{
			throw(Array<T>::outOfBound());
		}
		else
		{
			return (_array[index]);
		}
	}
	else
		throw(Array<T>::outOfBound());
	return (_array[index]);
}

template <typename T>
Array<T> &		Array<T>::operator=( Array const & rhs )
{
	if(this->_size > 0 && this->_array != nullptr)
		delete[] this->_array;
	if(rhs._size > 0)
	{
		this->_array = new T[rhs._size];
		this->_size = rhs._size;
		for (unsigned int i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete [] _array;
}

#endif /* *********************************************************** ARRAY_H */