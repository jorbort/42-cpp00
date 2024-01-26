#include "PhoneBook.hpp"
#include "program.h"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::recount_ids()
{
	for(int i = 0; i < 7; i++)
		contacts[i].set_id(i + 1);
}

void PhoneBook::rotate_list()
{
	Contact tmp[8];
	int j = 0;

	tmp[7] = contacts[0];
	for (int i = 1 ; i < 6; i++)
	{
		tmp[j] = contacts[i];
		j++;
	}
	for (int i = 0; i < 7; i++)
		contacts[i] = tmp[i];
	recount_ids();
}

void PhoneBook::add_contact(void)
{
	static int id = 0;
	std::string u_input[5];
	u_input[0] = "";

	for (int i = 0; i < 4; i++)
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
	}
	if (id > 7)
	{
		contacts[0] = Contact(u_input[0], u_input[1], u_input[2], u_input[3], u_input[4], 1);
		rotate_list();
	}
}