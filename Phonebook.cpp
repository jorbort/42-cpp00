#include "program.h"


void add_contact(PhoneBook *book)
{
	string u_input = "";

	for (int i = 0; i < 4; i++)
	{
		switch (i)
		{
			case  0 :
			{
				cout << "enter contact first name" << endl;
				getline(cin, u_input);
				break;
			}
			case  1 :
			{
				cout << "enter contact last name" << endl;
				getline(cin, u_input);
				break;
			}
			case  2 :
			{
				cout << "enter contact nickname" << endl;
				getline(cin, u_input);
				break;
			}
			case   3:
			{
				cout << "enter contact phone number" << endl;
				getline(cin, u_input);
				break;
			}
			case   4:
			{
				cout << "enter contact darkest secret" << endl;
				getline(cin, u_input);
				break;
			}
		}
	}
}