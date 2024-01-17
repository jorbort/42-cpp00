#include "program.h"

Contact::Contact(string f_name, string l_name, string nickname, string phone_number, string darkest_secret)
	{
		this->f_name = f_name;
		this->phone_number = phone_number;
		this->l_name = l_name;
		this->nickname = nickname;
		this->darkest_secret = darkest_secret;
	}
	Contact::~Contact()
	{

	}