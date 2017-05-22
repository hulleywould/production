#include "Headers.hpp"

int	choose_contact(Phonebook *contact)
{
	std::string	chosen_index;
	int		index;

	std::cout << "SELECT CONTACT BY INDEX" << std::endl;
	std::cin >> chosen_index;
	std::cout << "first name: " << contact[chosen_index].first_name << std::endl;
	return (0);
}


int	search_list(Phonebook *contact, int num_of_contacts)
{
	int	index;

	if (contact[0].has_details != true)
		std::cout << "no contacts available. " << std::endl;
	else
	{
		index = 0;
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		while (index < num_of_contacts)
		{
			std::cout << std::setw(10) << contact[index].index << "|";
			if (contact[index].first_name.length() >= 10)
				std::cout << contact[index].first_name.substr(0,9) << ".|";
			else
				std::cout << std::setw(10) << contact[index].first_name << "|";
			if (contact[index].last_name.length() >= 10)
				std::cout << contact[index].last_name.substr(0,9) << ".|";
			else
				std::cout << std::setw(10) << contact[index].last_name << "|";
			if (contact[index].nickname.length() >= 10)
				std::cout << contact[index].nickname.substr(0,9) << "." << std::endl;
			else
				std::cout << std::setw(10) << contact[index].nickname << std::endl;
			index++;
		}
		choose_contact(contact);
	}
	return (0);
}

