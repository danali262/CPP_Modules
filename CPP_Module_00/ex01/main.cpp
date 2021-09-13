#include <iostream>
#include <string>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

int	main()
{
	std::string		command;
	PhonebookClass	Phonebook;

	std::cout << "\e[46;1m\t\t\t\tPHONEBOOK\e[0m\n\n";
	while (command != "EXIT")
	{
		std::cout << "\e[1m\n\tPlease provide a command:\e[0m\n";
		std::cin >> command;
		if (command == "ADD")
			Phonebook.AddContactToPhonebook();
		else if (command == "SEARCH")
			Phonebook.ShowPhonebook();
		else if (command == "EXIT")
			std::cout << "\e[1m\tExiting the phonebook . . .\e[0m\n\n";
		else
			std::cout << command << "\e[1m is not a valid command. Please try again. \e[0m\n";
	}
	std::cout << "\e[46;1m\t\t\t\tBYE ! ! !\e[0m\n";
	return (0);
}
