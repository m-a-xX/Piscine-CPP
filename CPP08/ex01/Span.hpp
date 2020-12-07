#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <random>
# include <math.h>

class Span
{

	public:

		Span();
		Span(unsigned int);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();

		class	FullArrayException : public std::exception
		{
			const char *what() const throw();
		};

		class	NotEnoughNumbersException : public std::exception
		{
			const char *what() const throw();
		};


	private:

		std::vector<int> _array;
		unsigned int _index;
		unsigned int _size;
};

#endif /* ************************************************************ SPAN_H */