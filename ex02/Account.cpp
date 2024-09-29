/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 00:42:21 by marvin            #+#    #+#             */
/*   Updated: 2024/09/29 03:55:04 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
	return;
}

Account::Account( int initial_deposit )
	: _accountIndex(_nbAccounts++), _amount(initial_deposit), 
	  _nbDeposits(0), _nbWithdrawals(0) 
{
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";" 
	<< "amount:" << this->checkAmount() << ";"
	<< "created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "amount:" << this->checkAmount() << ";"
	<< "closed\n";
}

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout 
	<< "accounts:" << getNbAccounts() << ";"
	<< "total:" << getTotalAmount() << ";"
	<< "deposits:" << getNbDeposits() << ";"
	<< "withdrawals:" << getNbWithdrawals() << '\n';
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";" 
	<< "p_amount:" << this->checkAmount() << ";"
	<< "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	std::cout
	<< "amount:" << this->checkAmount() << ";"
	<< "nb_deposits:" << this->_nbDeposits << '\n';
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "p_amount:" << this->checkAmount() << ";";
	if (this->checkAmount() < withdrawal)
	{
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	else
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout
		<< "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->checkAmount() << ";"
		<<"nb_withdrawals:" << this->_nbWithdrawals << '\n';
		return (true);
	}
}

int		Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout
	<< "index:" << this->_accountIndex << ";"
	<< "amount:" << this->checkAmount() << ";"
	<< "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals << '\n';
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(NULL);
	char buffer[18 + 1];

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", localtime(&now));
	std::cout << buffer;
}