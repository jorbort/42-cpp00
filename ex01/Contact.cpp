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

void Contact::print_contact(void)
{
	std::cout << this->f_name << std::endl;
	std::cout << this->l_name << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phone_number << std::endl;
	std::cout << this->darkest_secret << std::endl;
}	
void Contact::set_id(int i)
{
	this->id = i;
}
std::string	Contact::get_contact_fname()
{
	return (this->f_name);
}
std::string	Contact::get_contact_lname()
{
	return (this->l_name);
}

std::string	Contact::get_contact_n_name()
{
	return (this->nickname);
}
std::string	Contact::get_contact_phonen()
{
	return (this->phone_number);
}

int	Contact::get_contact_id()
{
	return (this->id);
}