/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbortolo <jbortolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:16:56 by jorgebortol       #+#    #+#             */
/*   Updated: 2024/01/26 16:08:50 by jbortolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "program.h"
#include <string>
#include <iostream>

class Contact
{
private:
	std::string f_name;
	std::string l_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
	int			id;
public:
Contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string darkest_secret, int id);
Contact(void);
~Contact();
void	get_contact();
void	set_id(int i);
};


#endif