/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 10:51:54 by mavileo           #+#    #+#             */
/*   Updated: 2020/04/24 10:51:55 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"

using namespace std;

void	Contact::create_contact(Contact &contact)
{
	cout << "Enter your first name: ";
	getline(cin, contact.first_name);
	cout << "Enter your last name: ";
	getline(cin, contact.last_name);
	cout << "Enter your nickname: ";
	getline(cin, contact.nickname);
	cout << "Enter your login: ";
	getline(cin, contact.login);
	cout << "Enter your address: ";
	getline(cin, contact.address);
	cout << "Enter your mail: ";
	getline(cin, contact.mail);
	cout << "Enter your phone: ";
	getline(cin, contact.phone);
	cout << "Enter your birthday: ";
	getline(cin, contact.birthday);
	cout << "Enter your favorit meal: ";
	getline(cin, contact.favorit_meal);
	cout << "Enter your darkest secret: ";
	getline(cin, contact.darkest_secret);
	cout << "Enter your underwear color: ";
	getline(cin, contact.underwear_color);
	cout << "Contact successfully add\n";
}

void	Contact::print_contact(Contact &contact)
{
	cout << "First name: " << contact.first_name << endl;
	cout << "Last name: " << contact.last_name << endl;
	cout << "Nickname: " << contact.nickname << endl;
	cout << "Login: " << contact.login << endl;
	cout << "Postal address: " << contact.address << endl;
	cout << "Email address: " << contact.mail << endl;
	cout << "Phone number: " << contact.phone << endl;
	cout << "Birthday: " << contact.birthday << endl;
	cout << "Favorit meal: " << contact.favorit_meal << endl;
	cout << "Darkest secret: " << contact.darkest_secret << endl;
	cout << "Uunderwear color: " << contact.underwear_color << endl;
}

void	print_value(string str)
{
	if (str.length() < 11)
		cout << right << setw(10) << str;
	else
		cout << right << setw(9) << str.substr(0, 9) << ".";
}

void	Contact::list_contacts(Contact *contacts, int index)
{
	string	input;
	int		print(0);
	int		i(0);
	bool	digit = true;

	while (i < index)
	{
		cout << "         " << i + 1 << "|";
		print_value(contacts[i].first_name);
		cout << "|";
		print_value(contacts[i].last_name);
		cout << "|";
		print_value(contacts[i].login);
		cout << endl;
		i++;
		print++;
	}
	if (print)
		cout << "Enter the index of the contact you want to consulte: ";
	else
	{
		cout << "There are no contacts for the moment\n";
		return ;
	}
	getline(cin, input);
	for (int i=0; input[i]; i++)
    {
        if (!isdigit(input[i]))
        {
			digit = false;
			break;
		}
    }
	if (digit && stoi(input) - 1 >= 0 && stoi(input) - 1 < i)
	{
		i = stoi(input) - 1;
		print_contact(contacts[i]);
	}
	else
		cout << "You typed a wrong index\n";
}
