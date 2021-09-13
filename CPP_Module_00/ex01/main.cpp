#include <iostream>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

int	main()
{
	std::string		command;
	PhonebookClass	Phonebook;
	int				i;

	Phonebook.ContactNbr = 0;
	while (command != "EXIT")
	{
		std::cout << "Please provide a command:\n";
		std::cin >> command;
		if (command == "ADD")
		{
			Phonebook.Contact[Phonebook.ContactNbr].AddContact(Phonebook.Contact[Phonebook.ContactNbr]);
			if (Phonebook.ContactNbr < 8)
				Phonebook.ContactNbr++;
		}
		else if (command == "SEARCH")
		{
			i = 0;
			while (i < Phonebook.ContactNbr)
			{
				Phonebook.Contact[i].DisplayContacts(Phonebook.Contact[i]);
				i++;
			}
		}
		else if (command == "EXIT")
			std::cout << "Exiting the phonebook . . .\n";
		else
			std::cout << command << " is not a valid command. Please try again. \n";
	}
	return (0);
}
