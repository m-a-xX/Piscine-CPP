#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T>
class Array
{

	public:

		Array() : _n(0) {
			_array = new T[0];
		}
		Array( unsigned int n ) : _n(n) {
			_array = new T[n];
			for (unsigned int i=0;i<n;i++)
				_array[i] = (T)0;
		}
		Array( Array const & src ) : _n(src._n) {
			_array = new T[src._n];
			for (unsigned int i=0;i<_n;i++)
				_array[i] = src._array[i];
		}
		~Array(){
			delete[] _array;
		}

		class	OutOfLimitsException : public std::exception
		{
			const char *what() const throw() {
				return "Index entered in out of the limits of the array";
			}
		};

		Array &		operator=( Array const & src ) {
			_n = src._n;
			_array = new T[src._n];
			for (unsigned int i=0;i<_n;i++)
				_array[i] = src._array[i];
		}
		T &		operator[]( unsigned int i ){
			if (i >= _n)
				throw OutOfLimitsException();
			return _array[i];
		}

		unsigned int size() const {
			return _n;
		}

	private:

		T *_array;
		unsigned int _n;
};


#endif /* *********************************************************** ARRAY_H */