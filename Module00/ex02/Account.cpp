/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: carlowesseling <carlowesseling@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/04 23:04:51 by carlowessel   #+#    #+#                 */
/*   Updated: 2023/07/06 09:44:38 by carlowessel   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

	#include "Account.hpp"
	#include <string>
	#include <iostream>
	#include <ctime>

	#define RESET   "\033[0m"
	#define BLUE    "\033[34m"
	
	int Account::_nbAccounts = 0;
	int Account::_totalAmount = 0;
	int Account::_totalNbDeposits = 0;
	int Account::_totalNbWithdrawals = 0;
	
	Account::Account(void) {}
	
	Account::~Account(void) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";closed" << std::endl;
	}
	
	Account::Account(int initial_deposit) : _amount (0), _nbDeposits (0), _nbWithdrawals (0) {
		this->_accountIndex = _nbAccounts;
		Account::_nbAccounts += 1;
		this->_amount = initial_deposit;
		Account::_totalAmount += initial_deposit;
	
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";created" << std::endl;
	}
	
	int	Account::getNbAccounts( void ) {
		return _nbAccounts;		
	}
	
	int	Account::getTotalAmount( void ) {
		return _totalAmount;
	}
	
	int	Account::getNbDeposits( void ) {
		return _totalNbDeposits;
	}
	
	int	Account::getNbWithdrawals( void ) {
		return _totalNbWithdrawals;
	}
	
	void	Account::displayAccountsInfos( void ) {
		_displayTimestamp();
		std::cout << "accounts:" << getNbAccounts();
		std::cout << ";total:" << getTotalAmount();
		std::cout << ";deposits:" << getNbDeposits();
		std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
	}

	void	Account::makeDeposit( int deposit ) {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";deposit:" << deposit;
		this->_amount += deposit;
		this->_nbDeposits += 1;
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits += 1;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_deposits:" << this->_nbDeposits << std:: endl;
	}
	
	bool	Account::makeWithdrawal( int withdrawal ) {
		if (checkAmount() >= withdrawal) {
			_displayTimestamp();
			std::cout << "index:" << _accountIndex;
			std::cout << ";p_amount:" << _amount;
			std::cout << ";withdrawl:" << withdrawal;
			this->_amount -= withdrawal;
			this->_nbWithdrawals +=1;
			Account::_totalAmount -= withdrawal;
			Account::_totalNbWithdrawals += 1;
			std::cout << ";amount:" << _amount;
			std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std:: endl;
			return true;
		}
		_displayTimestamp();
		std::cout << "index:"  << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";withdrawl:refused:" << std::endl;
		return false;
	}
	
	int		Account::checkAmount( void ) const {
		return this->_amount;
	}

	void	Account::displayStatus( void ) const {
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";amount:" << _amount;
		std::cout << ";deposits:" << _nbDeposits;
		std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
	}

	void	Account::_displayTimestamp( void ) {
		std::time_t	now 		= std::time(0);
		struct tm	timeStruct = *localtime(&now);
		
		char timeStamp[16];
		std::strftime(timeStamp, sizeof(timeStamp), "%Y%m%d_%H%M%S", &timeStruct);
		std::cout << "[" << timeStamp << "] ";
	}
	