#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	_index = 0;
}

Span::Span(unsigned int size)
{
	_index = 0;
	_size = size;

}

Span::Span( const Span & src )
{
	_index = src._index;
	_array = src._array;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

 Span &				Span::operator=( Span const & rhs )
{
	_index = rhs._index;
	_array = rhs._array;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int nb)
{
	if (_index >= _size)
		throw FullArrayException();
	_index++;
	_array.push_back(nb);
}

int Span::shortestSpan()
{
	if (_index < 2)
		throw NotEnoughNumbersException();
	int min = 999999;
	for (int x=0;x < (int)_size;x++)
	{
		for (int y=0;y < (int)_size;y++)
		{
			if (y != x)
				if (sqrt(pow(_array[x] - _array[y], 2)))
					min = sqrt(pow(_array[x] - _array[y], 2));
		}
	}
	return min;
}

int Span::longestSpan()
{
	if (_index < 2)
		throw NotEnoughNumbersException();
	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());
	return max - min;
}

const char *Span::FullArrayException::what() const throw()
{
	return "The array is full";
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return "There are not enough numbers in the array to compare them";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */