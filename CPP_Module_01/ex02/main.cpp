#include <string>
#include <iostream>

int	main()
{
    std::string brain;
    std::string *stringPTR;
	std::string &stringREF = brain;

    brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	std::cout << "Displaying the address of the string using the string: " << std::endl;
    std::cout << &brain << std::endl;
	std::cout << "Displaying the address of the string using stringPTR: " << std::endl;
    std::cout << stringPTR << std::endl;
	std::cout << "Displaying the address of the string using stringREF: " << std::endl;
    std::cout << &stringREF << std::endl;
	std::cout << "Displaying the string using the string: " << std::endl;
    std::cout << brain << std::endl;
	std::cout << "Displaying the string using stringPTR: " << std::endl;
    std::cout << *stringPTR << std::endl;
	std::cout << "Displaying the string using stringREF: " << std::endl;
    std::cout << stringREF << std::endl;
    return (0);
}
