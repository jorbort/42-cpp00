#include "PhoneBook.hpp"
#include "program.h"

PhoneBook::PhoneBook()
{
	this->len = 0;
}

PhoneBook::~PhoneBook()
{
}

void  PhoneBook::search_contact()
{
	std::string u_input = "";
	if (len == 0)
	{
		std::cout << "no contacts is your phonebook make some friends first" << std::endl;
		return ;
	}
	std::cout << "************************************************" << std::endl;
	for (int i = 0; i < len; i++)
	{
		std::cout << "*         ";
		std::cout << contacts[i].get_contact_id() << "|" << " ";
		format_print(contacts[i].get_contact_fname());
		std::cout << "|" << " ";
		format_print(contacts[i].get_contact_lname());
		std::cout << "|" << " ";
		format_print(contacts[i].get_contact_n_name());
		std::cout << "*" << std::endl;
	}
	std::cout << "************************************************" << std::endl;
	std::cout << "pick a contact id" << std::endl;
	std::getline(std::cin, u_input);
	for (int i = 0; i < len; i++)
	{
		if (std::to_string(contacts[i].get_contact_id()) == u_input)
		{
			contacts[i].print_contact();
			return ;
		}
	}
	std::cout << "invalid contact id" << std::endl;
}
void PhoneBook::recount_ids()
{
	for(int i = 0; i < 8; i++)
		contacts[i].set_id(i + 1);
}

void PhoneBook::rotate_list()
{
	Contact tmp[8];
	int j = 0;

	tmp[7] = contacts[0];
	for (int i = 1 ; i < 8; i++)
	{
		tmp[j] = contacts[i];
		j++;
	}
	for (int i = 0; i < 8; i++)
		contacts[i] = tmp[i];
	recount_ids();
}

void PhoneBook::add_contact(void)
{
	static int id = 0;
	std::string u_input[5];
	u_input[0] = "";

	for (int i = 0; i <= 4; i++)
	{
		switch (i)
		{
			case  0 :
			{
				std::cout << "enter contact first name" << std::endl;
				std::getline(std::cin, u_input[i]);
				break;
			}
			case  1 :
			{
				std::cout << "enter contact last name" << std::endl;
				std::getline(std::cin, u_input[i]);
				break;
			}
			case  2 :
			{
				std::cout << "enter contact nickname" << std::endl;
				std::getline(std::cin, u_input[i]);
				break;
			}
			case   3:
			{
				std::cout << "enter contact phone number" << std::endl;
				std::getline(std::cin, u_input[i]);
				break;
			}
			case   4:
			{
				std::cout << "enter contact darkest secret" << std::endl;
				std::getline(std::cin, u_input[i]);
				break;
			}
			default :
				break;
		}
		if (u_input[i].empty() || std::cin.fail())
		{
			std::cout << "no input field can be empty" << std::endl;
			i--;
		}
		if (i == 3 && !all_of(u_input[i].begin(), u_input[i].end(), ::isdigit))
		{
			std::cout << "arguments must be numeric" << std::endl;
			i--;
		}
	}
	if (id <= 7)
	{
		contacts[id] = Contact(u_input[0], u_input[1], u_input[2], u_input[3], u_input[4], id+1);
		len += 1;
		id++;
	}
	else if (id > 7)
	{
		contacts[0] = Contact(u_input[0], u_input[1], u_input[2], u_input[3], u_input[4], 1);
		rotate_list();
	}
}