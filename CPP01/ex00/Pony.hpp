# ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

using namespace std;

class Pony
{
	public:
	Pony(string name_arg, int position);
	void	forward();
	void	print_position();

	private:
	string	name;
	int		position;
};

#endif