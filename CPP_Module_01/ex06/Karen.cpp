#include "Karen.hpp"
#include <algorithm>

Karen::Karen(){}

void	Karen::complain(std::string level)
{
	t_lookup	table[4] = {
		{"DEBUG", &Karen::debug},
		{"INFO", &Karen::info},
		{"WARNING", &Karen::warning},
		{"ERROR", &Karen::error}
	};

	void	(Karen::*fptr)(void);

	std::string	level_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int idx;

	idx = 0;
	while (idx < 4)
	{
		if (level_array[idx] == level)
			break;
		idx++;
	}

	switch(idx)
	{
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
		case 0:
			fptr = table[0].f;
			(this->*fptr)();
		case 1:
			fptr = table[1].f;
			(this->*fptr)();
		case 2:
			fptr = table[2].f;
			(this->*fptr)();
		case 3:
			fptr = table[3].f;
			(this->*fptr)();
	}
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout	<< "\"I love to get extra bacon for my "
				<< " 7XL-double-cheese-triple-pickle-special-ketchup burger."
				<< "I just love it!\"" << std::endl;
	std::cout << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout	<< "\"I cannot believe adding extra bacon cost more money."
			 	<< "You don’t put enough! If you did I would not have to ask for it!\"" 
				<< std::endl;
	std::cout << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout	<< "\"I think I deserve to have some extra bacon for free. I’ve been"
				<< "coming here for years and you just started working here last month.\"" 
				<< std::endl;
	std::cout << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "\"This is unacceptable, I want to speak to the manager now.\"" << std::endl;
	std::cout << std::endl;
}

Karen::~Karen(){}
