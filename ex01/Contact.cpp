#include "program.h"

Contact::Contact(void)
{
}

Contact::Contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_number, std::string darkest_secret, int id)
	{
		this->f_name = f_name;
		this->phone_number = phone_number;
		this->l_name = l_name;
		this->nickname = nickname;
		this->darkest_secret = darkest_secret;
		this->id = id;
	}
Contact::~Contact()
{

}
void Contact::set_id(int i)
{
	this->id = i;
}