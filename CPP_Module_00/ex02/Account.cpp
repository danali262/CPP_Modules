#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	std::cout << initial_deposit << std::endl;
}

// int		Account::getNbAccounts(void)
// {

// }

// int		Account::getTotalAmount(void)
// {

// }

// int		Account::getNbDeposits(void)
// {

// }

// int		Account::getNbWithdrawals(void)
// {

// }

// void	Account::displayAccountsInfos(void)
// {

// }

// void	Account::makeDeposit(int deposit)
// {

// }

// bool	Account::makeWithdrawal(int withdrawal)
// {

// }

// int		Account::checkAmount(void) const
// {

// }

// void	Account::displayStatus(void) const
// {

// }

void	Account::_displayTimestamp(void)
{
	std::time_t	now;
	std::tm		*ltm;

	now = time(0);
	ltm = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon; 
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec;
	std::cout << "] ";
}

Account::~Account(void){}