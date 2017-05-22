/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_phonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:19:10 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 15:25:11 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers.hpp"

Phonebook add_contact(Phonebook *new_contact)
{
	std::cout << "what's your first name? " << std::endl;
	std::getline(std::cin, new_contact->first_name);
	std::cout << "what's your last name? " << std::endl;
	std::getline(std::cin, new_contact->last_name);	
	std::cout << "what's your nickame? " << std::endl;
	std::getline(std::cin, new_contact->nickname);
	std::cout << "what's your login? " << std::endl;
	std::getline(std::cin, new_contact->login);
	std::cout << "what's your postal address? " << std::endl;
	std::getline(std::cin, new_contact->postal_address);
	std::cout << "what's your email address? " << std::endl;
	std::getline(std::cin, new_contact->email_address);
	std::cout << "what's your phone number? " << std::endl;
	std::getline(std::cin, new_contact->phone_num);
	std::cout << "what's your birthday date? " << std::endl;
	std::getline(std::cin, new_contact->birthdate);
	std::cout << "what's your favourite meal? " << std::endl;
	std::getline(std::cin, new_contact->fave_meal);
	std::cout << "what's your underwear color? " << std::endl;
	std::getline(std::cin, new_contact->underwear_color);
	std::cout << "what's your darkest secret? " << std::endl;
	std::getline(std::cin, new_contact->darkest_secret);
	new_contact->has_details = true;
	new_contact->index = new_contact->contact_index++;
	return (*new_contact);
}

int Phonebook::contact_index = 0;
