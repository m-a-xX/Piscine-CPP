# ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Contact
{
	public:
	//Contact();
	void	create_contact(Contact &contact);
	void	print_contact(Contact &contact);
	void	list_contacts(Contact *contacts, int index);

	private:
	string first_name;
	string last_name;
	string nickname;
	string login;
	string address;
	string mail;
	string phone;
	string birthday;
	string favorit_meal;
	string darkest_secret;
	string underwear_color;
};

#endif