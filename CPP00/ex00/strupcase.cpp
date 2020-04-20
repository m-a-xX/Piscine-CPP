/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strupcase.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:47:10 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/20 10:47:11 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int ac, char **av)
{
	int i(1);
	int j;

	if (ac == 1)
	{
		cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<endl;
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				cout<<(char)(av[i][j] - 32);
			else
				cout<<av[i][j];
			j++;
		}
		i++;
	}
	cout<<endl;
	return (0);
}