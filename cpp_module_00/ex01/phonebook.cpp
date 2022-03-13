#include "phonebook.class.hpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

# define ADD    1
# define SEARCH 2
# define EXIT   3

void	phonebook::print_enter(int add_rank)
{
	if (add_rank == 0)
		std::cout << "Enter the first name" << std::endl;
	if (add_rank == 1)
		std::cout << "Enter the last name" << std::endl;
	if (add_rank == 2)
		std::cout << "Enter the nickname" << std::endl;
	if (add_rank == 3)
		std::cout << "Enter the phone number" << std::endl;
	if (add_rank == 4)
		std::cout << "Enter the darkest secret" << std::endl;
}

void	phonebook::set_contacts(int add_rank, std::string buffer, int i)
{
	if (add_rank == 0)
		this->contacts[i].set_first_name(buffer);
	if (add_rank == 1)
		this->contacts[i].set_last_name(buffer);
	if (add_rank == 2)
		this->contacts[i].set_nickname(buffer);
	if (add_rank == 3)
		this->contacts[i].set_phone_number(buffer);
	if (add_rank == 4)
		this->contacts[i].set_darkest_secret(buffer);
}

std::string phonebook::check_width_of_string(std::string str)
{
	if(str.length() > 10)
	{
		str = str.substr(0, 9);
		str = str + ".";
		return (str);
	}
	return (str);
}

void	phonebook::print_contacts(int end)
{
	int i;
	std::string temp;

	i = 0;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	while(i < end)
	{
		std::cout << std::setw(10) << this->contacts[i].get_id() << "|";
		temp = check_width_of_string(this->contacts[i].get_first_name());
		std::cout << std::setw(10) << temp << "|";
		temp = check_width_of_string(this->contacts[i].get_last_name());
		std::cout << std::setw(10) << temp << "|";
		temp = check_width_of_string(this->contacts[i].get_nickname());
		std::cout << std::setw(10) << temp << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	phonebook::print_contact_info(int i)
{
	std::cout << "index: " << this->contacts[i].get_id() << std::endl;
	std::cout << "first name: " << this->contacts[i].get_first_name() << std::endl;
	std::cout << "last name: " << this->contacts[i].get_last_name() << std::endl;
	std::cout << "nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "phone number: " << this->contacts[i].get_phone_number() << std::endl;
	std::cout << "darkest secret: " << this->contacts[i].get_darkest_secret() << std::endl;
}

void	phonebook::add_function(int *i, int *nb_contacts, int *add_rank, std::string buffer, int *state)
{
	if (*i > 7)
	{
		*nb_contacts = 8;
		*i = *i - 8;
	}
	else if (*nb_contacts != 8)
		*nb_contacts = *i + 1;
	this->set_contacts(*add_rank, buffer, *i);
	(*add_rank)++;
	if(*add_rank == 5)
	{
		this->contacts[*i].set_id(*i);
		*add_rank = 0;
		(*i)++;
		*state = 0;
	}
}

int		phonebook::search_function(int *state, int nb_contacts)
{
	int index;

	*state = SEARCH;
	this->print_contacts(nb_contacts);
	std::cout << "please enter the index of the contact" << std::endl;
	std::cin >> index;
	if(std::cin.fail())
	{
		std::cout << "please enter a digit" << std::endl;
		return 0;
	}
	else
		this->print_contact_info(index);
	return (1);
}

int main()
{
	std::string buffer;
	int 		add_rank;
	int 		state;
	int			i;
	int			nb_contacts;
	phonebook 	pb;

	i = 0;
	add_rank = 0;
	state = 0;
	while (1)
	{
		if (state == ADD)
			pb.print_enter(add_rank);
		std::getline (std::cin,buffer);
		if (state == ADD)
			pb.add_function(&i, &nb_contacts, &add_rank, buffer, &state);
		if (buffer == "ADD")
			state = ADD;
		else if (buffer == "SEARCH")
		{
			if(!(pb.search_function(&state, nb_contacts)))
				break ;
		}
		else if (buffer == "EXIT")
			state = EXIT;
		else if (state == 0)
			std::cout << "please enter ADD or SEARCH or EXIT" << std::endl;
		if (state == EXIT)
			break ;
	}
}
