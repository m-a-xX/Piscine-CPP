#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <vector>

template<typename T>
int findInt(T &array, int toFind)
{
	for (int i=0; i < (int)array.size(); i++)
	{
		if (toFind == i)
		{
			std::cout << toFind << " was found in the array at the index : " << i << "\n";
			return 1;
		}
	}
	return 0;
}


#endif /* *********************************************************** ARRAY_H */