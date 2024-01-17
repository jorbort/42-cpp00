/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgebortolotti <jorgebortolotti@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 18:16:56 by jorgebortol       #+#    #+#             */
/*   Updated: 2024/01/03 09:43:27 by jorgebortol      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "program.h"

class Contact
{
private:
	string f_name;
	string l_name;
	string nickname;
	string phone_number;
	string darkest_secret;
public:
Contact(string f_name, string l_name, string nickname, string phone_number, string darkest_secret);
~Contact();
};


#endif