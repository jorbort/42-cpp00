#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "program.h"

class PhoneBook
{
private:
	Contact contacts[8];
	int	len;
public:
	PhoneBook();
	~PhoneBook();
	void	add_contact();
	void	rotate_list();
	void	recount_ids();
	void	search_contact();
};

#endif