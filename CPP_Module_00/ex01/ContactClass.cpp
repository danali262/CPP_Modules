#include <iostream>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

ContactClass::ContactClass(void){}

void	ContactClass::AddContact(void)
{
	std::cout << "\e\n\t[1mAdding new contact . . .\e[0m\n\n";
	std::cout << "\e[1mPlease fill in the following fields.\e[0m\n";
	std::cout << "\e[1mFirst Name: \e[0m";
	std::cin >> this->FirstName;
	std::cout << "\e[1mLast Name: \e[0m";
	std::cin >> this->LastName;
	std::cout << "\e[1mNickname: \e[0m";
	std::cin >> this->NickName;
	std::cout << "\e[1mPhone number: \e[0m";
	std::cin >> this->PhoneNbr;
	std::cout << "\e[1mDarkest secret: \e[0m";
	std::cin >> this->Secret;
}

void	ContactClass::DisplayContacts(void)
{
	std::cout << "First Name of contact is: ";
	std::cout << this->FirstName;
	std::cout << "\n";
	std::cout << "Last Name of contact is: ";
	std::cout << this->LastName;
	std::cout << "\n";
	std::cout << "Nickname of contact is: ";
	std::cout << this->NickName;
	std::cout << "\n";
	std::cout << "Phone number of contact is: ";
	std::cout << this->PhoneNbr;
	std::cout << "\n";
	std::cout << "Darkest secret of contact is: ";
	std::cout << this->Secret;
	std::cout << "\n";
}
