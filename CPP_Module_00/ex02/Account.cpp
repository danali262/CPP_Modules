#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	Account::_displayTimestamp();
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout
				<< "index:" << this->_accountIndex 
				<< ";amount:" << initial_deposit 
				<< ";created" << std::endl;
	this->_nbAccounts++;
}

int		Account::getNbAccounts(void)
{
	return (this->_nbAccounts);
}

int		Account::getTotalAmount(void)
{
	return (this->_amount);
}

int		Account::getNbDeposits(void)
{
	return (this->_totalNbDeposits);
}

int		Account::getNbWithdrawals(void)
{
	return (this->_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout
				<< "accounts:" << _nbAccounts 
				<< ";total:" << _totalAmount 
				<< ";deposits:" << _totalNbDeposits 
				<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount;

	Account::_displayTimestamp();
	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout
				<< "index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount 
				<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount;

	Account::_displayTimestamp();
	p_amount = this->_amount;
	if (withdrawal > p_amount)
	{
		std::cout
				<< "index:" << this->_accountIndex
				<< ";p_amount:" << p_amount
				<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout
					<< "index:" << this->_accountIndex
					<< ";p_amount:" << p_amount
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << this->_amount 
					<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int		Account::checkAmount(void) const
{
	std::cout << "I am in checkAmount" << std::endl;
	return (5);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout
				<< "index:" << this->_accountIndex
				<< ";amount:" << this->_amount 
				<< ";deposits:" << this->_nbDeposits 
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

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

	// std::cout << "[19920104_091532] ";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout
				<< "index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";closed" << std::endl;

}
