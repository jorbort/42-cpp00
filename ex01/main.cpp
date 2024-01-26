#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"



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
			std::cout << "add" << std::endl;
			book.add_contact();
		}
		if (input == "SEARCH")
		{
			book.search_contact();
		}
		else
		{
			std::cout << "Please enter a valid option";
		}
	}
	return (0);
}