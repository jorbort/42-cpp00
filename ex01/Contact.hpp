/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbortolo <jbortolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:16:56 by jorgebortol       #+#    #+#             */
/*   Updated: 2024/01/27 14:52:13 by jbortolo         ###   ########.fr       */
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
std::string get_contact_fname(void);
std::string get_contact_lname(void);
std::string get_contact_n_name(void);
std::string get_contact_phonen(void);
int 	get_contact_id(void);
void	set_id(int i);
void	print_contact(void);
void	format_print(std::string s);	
};


#endif