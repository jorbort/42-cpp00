/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbortolo <jbortolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:07:12 by jbortolo          #+#    #+#             */
/*   Updated: 2024/01/27 19:21:34 by jbortolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = 0;
	if (initial_deposit > 0)
		this->_nbDeposits = 1;
	else
		this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account()
{
}

void Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;
	
}
bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount - withdrawal >= 0)
	{
		this->_amount -= withdrawal;
		return (true);
	}
	else
		return (false);
}
