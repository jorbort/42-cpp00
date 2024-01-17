#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"
using namespace std;


int	main(void)
{
	string input = " ";
	PhoneBook book;

	while (input != "exit")
	{
		cout << "Please select an option among ADD, SEARCH, DELETE or EXIT" << endl;
		cout << ">";
		getline(cin,input);
		if (input == "ADD")
		{
			add_contact(&book);
		}
		if (input == "SEARCH")
		{

		}
		if (input == "DELETE")
		{
			
		}
	}
}