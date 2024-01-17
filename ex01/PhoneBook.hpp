#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "program.h"

class PhoneBook
{
private:
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
};

#endif