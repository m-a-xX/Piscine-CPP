#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack() : std::stack<T>() {};
		MutantStack( MutantStack const & src ) : std::stack<T>(src) {};
		virtual ~MutantStack() {};

		MutantStack &		operator=( MutantStack const & rhs ) {
			this->c = rhs.c;
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator end(void) { return (this->c.end()); }
		iterator begin(void) { return (this->c.begin()); }
};

#endif /* ***************************************************** MUTANTSTACK_H */