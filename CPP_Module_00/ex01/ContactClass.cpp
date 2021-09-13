#include <iostream>
#include <iomanip>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

ContactClass::ContactClass(void){}

void	ContactClass::AddContact(void)
{
	std::cout << "\e\n\t[1mAdding new contact . . .\e[0m\n\n";
	std::cout << "\e[1mPlease fill in the following fields.\e[0m\n";
	std::cout << "\e[1mFirst name: \e[0m";
	std::cin >> this->FirstName;
	std::cout << "\e[1mLast name: \e[0m";
	std::cin >> this->LastName;
	std::cout << "\e[1mNickname: \e[0m";
	std::cin >> this->NickName;
	std::cout << "\e[1mPhone number: \e[0m";
	std::cin >> this->PhoneNbr;
	std::cout << "\e[1mDarkest secret: \e[0m";
	std::cin >> this->Secret;
}

void	ContactClass::TruncateAttributes(void)
{
	if (this->FirstName.length() > 10)
		this->FirstName = this->FirstName.substr(0, 9) + ".";
	if (this->LastName.length() > 10)
		this->LastName = this->LastName.substr(0, 9) + ".";
	if (this->NickName.length() > 10)
		this->NickName= this->NickName.substr(0, 9) + ".";
}


void	ContactClass::DisplayContacts(int index)
{
	this->TruncateAttributes();
	std::cout << std::right << std::setw(10) << index << "|";
	std::cout << std::right << std::setw(10) << this->FirstName << "|";
	std::cout << std::right << std::setw(10) << this->LastName << "|";
	std::cout << std::right << std::setw(10) << this->NickName << "|";
	std::cout << "\n";
}

void	ContactClass::DisplayFullInfo(int index)
{
	std::cout << std::left << std::setw(30) << "\e[1mIndex: \e[0m" << index << std::endl;
	std::cout << std::setw(30) << "\e[1mFirst Name: \e[0m" << this->FirstName << std::endl;
	std::cout << std::setw(30) << "\e[1mLast Name: \e[0m" << this->LastName << std::endl;
	std::cout << std::setw(30) << "\e[1mNickname: \e[0m" << this->NickName << std::endl;
	std::cout << std::setw(30) << "\e[1Phone number: \e[0m" << this->PhoneNbr << std::endl;
	std::cout << std::setw(30) << "\e[1mDarkest secret: \e[0m" << this->Secret << std::endl;

}

ContactClass::~ContactClass(void){}
