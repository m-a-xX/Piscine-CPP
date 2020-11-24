/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   directory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:47:10 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/20 19:40:37 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "directory.h"

using namespace std;

int main()
{
	Contact	contacts[8];
	string	input;
	int		i(0);

	cout << "Welcome in the directory. Commands availables are ADD, SEARCH and EXIT\n";
	while (1)
	{
		getline(cin, input);
		if (!input.compare("EXIT"))
			break ;
		else if (!input.compare("ADD"))
		{
			if (i < 8)
			{
				contacts[i].create_contact(contacts[i]);
				i++;				
			}
			else
				
				cout << "Maximum amount of contacts is reached, you can't add a new one.\n";
		}
		else if (!input.compare("SEARCH"))
			contacts[0].list_contacts(contacts, i);
		else
			cout << "Command not found. Commands availables are ADD, SEARCH and EXIT\n";
	}
}