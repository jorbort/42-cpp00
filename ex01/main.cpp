#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void format_print(std::string s)
{
	if (s.length() >= 10)
	{
		for (int i = 0; i < 9; i++)
		{
			std::cout << s[i];
		}
		std::cout << ".";
	}
	else
	{
		for(unsigned long i = 0; i < 10 - s.length(); i++)
			std::cout << " ";
		std::cout << s;
	}
}

int	main(void)
{
	std::string input = "";
	PhoneBook book;

	while (input != "EXIT")
	{
		std::cout << "Please select an option among ADD, SEARCH, or EXIT" << std::endl;
		std::cout << ">";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			book.add_contact();
		}
		if (input == "SEARCH")
		{
			book.search_contact();
		}
		if (input == "EXIT")
		{
			continue ;
		}
		else
		{
			std::cout << "Please enter a valid option";
		}
	}
	return (0);
}