/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:55:10 by fraqioui          #+#    #+#             */
/*   Updated: 2023/08/07 09:06:19 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include<iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    int i;

    i = 0;
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    ++_nbAccounts;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "created" << std::endl;
}

Account::Account(void)
{

}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "closed";
    std::cout << std::endl;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ';';
    std::cout << "total:" << getTotalAmount() << ';';
    std::cout << "deposits:" << getNbDeposits() << ';';
    std::cout << "withdrawals:" << getNbWithdrawals();
    std::cout << std::endl;
    _totalAmount = 0;
}

void Account::makeDeposit(int deposit)
{
    int old_amount = _amount;

    _amount += deposit; 
    _totalAmount += _amount;
    _nbDeposits = 1;
    ++_totalNbDeposits;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << old_amount << ';';
    std::cout << "deposit:" << deposit << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "nb_deposits:" << _nbDeposits;
    std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "p_amount:" << _amount << ';';
    _amount -= withdrawal;
    if (checkAmount())
    {
        _totalAmount += _amount;
        _nbWithdrawals = 1;
        std::cout << "withdrawal:" << withdrawal << ';';
        std::cout << "amount:" << _amount << ';';
        std::cout << "nb_withdrawals:" << _nbWithdrawals;
        std::cout << std::endl;
        return (1);
    }
    _amount += withdrawal;
    _totalAmount += _amount;
    std::cout << "withdrawal:" << "refused";
    std::cout << std::endl;
    return (0);
}

int Account::checkAmount(void) const
{
    if (_amount < 0)
        return (0);
   ++_totalNbWithdrawals;
    return (1);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ';';
    std::cout << "amount:" << _amount << ';';
    std::cout << "deposits:" << _nbDeposits << ';';
    std::cout << "withdrawals:" << _nbWithdrawals;
    std::cout << std::endl;
}

void Account::_displayTimestamp(void)
{
    char buffer[80];

    std::time_t currentTime = std::time(nullptr);
    std::tm* timeInfo = std::localtime(&currentTime);
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeInfo);
    std::cout << '[';
    std::cout << buffer;
    std::cout << "] ";
}
