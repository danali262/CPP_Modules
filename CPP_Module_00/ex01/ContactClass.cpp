#include <iostream>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

void	ContactClass::AddContact(ContactClass Contact)
{
	std::cout << "Adding new contact . . .\n";
	std::cout << "\tPlease fill in the following fields.\n";
	std::cout << "First Name: ";
	std::cin >> Contact.FirstName;
	std::cout << "Last Name: ";
	std::cin >> Contact.LastName;
	std::cout << "Nickname: ";
	std::cin >> Contact.NickName;
	std::cout << "Phone number: ";
	std::cin >> Contact.PhoneNbr;
	std::cout << "Darkest secret: ";
	std::cin >> Contact.Secret;
}

void	ContactClass::DisplayContacts(ContactClass Contact)
{
	std::cout << "First Name of contact is: ";
	std::cout << Contact.FirstName;
	std::cout << "\n";
	std::cout << "Last Name of contact is: ";
	std::cout << Contact.LastName;
	std::cout << "\n";
	std::cout << "Nickname of contact is: ";
	std::cout << Contact.NickName;
	std::cout << "\n";
	std::cout << "Phone number of contact is: ";
	std::cout << Contact.PhoneNbr;
	std::cout << "\n";
	std::cout << "Darkest secret of contact is: ";
	std::cout << Contact.Secret;
	std::cout << "\n";
}
