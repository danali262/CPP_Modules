#include <iostream>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

PhonebookClass::PhonebookClass(void)
{
	this->ContactNbr = 0;
}

void	PhonebookClass::AddContactToPhonebook(void)
{
	this->Contact[this->ContactNbr].AddContact();
	if (this->ContactNbr < 8)
		this->ContactNbr++;
}

void	PhonebookClass::ShowPhonebook(void)
{
	int	i;

	i = 0;
	while (i < this->ContactNbr)
	{
		this->Contact[i].DisplayContacts();
		i++;
	}
}