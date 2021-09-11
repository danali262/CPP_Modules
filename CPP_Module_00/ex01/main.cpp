#include <iostream>
#include <string>

int	main()
{
	std::string command;

	while (command != "EXIT")
	{
		std::cout << "Please provide a command:\n";
		std::cin >> command;
		if (command == "ADD")
			std::cout << "ADD a contact pls\n";
		else if (command == "SEARCH")
			std::cout << "SEARCH a contact pls\n";
		else if (command == "EXIT")
			std::cout << "Exiting the phonebook . . .\n";
		else
			std::cout << command << " is not a valid command. Please try again. \n";
	}
	return (0);
}