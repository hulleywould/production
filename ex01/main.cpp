/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:04:01 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 16:08:06 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers.hpp"

int check_command(std::string command)
{
	if (command == "ADD")
		return (1);
	else if (command == "SEARCH")
		return (2);
	else if (command == "EXIT")
		return (-1);
	return (0);
}

int	main(void)
{
	Phonebook contact[8];
	std::string command;
	int	index;

	index = 0;
	while (true)
	{
		std::cout << "ENTER COMMAND (ADD, SEARCH, DELETE, EXIT): " << std::endl;
		std::getline(std::cin, command);
		if (check_command(command) == 1)
		{
			if (index < 8)
			{
				add_contact(&contact[index]);
				index++;
			}
			else
				std::cout << "cannot add more contacts!" << std::endl;
		}
		else if (check_command(command) == 2)
			search_list(contact, index);
		else if (check_command(command) == -1)
			return (0);
	}
	return (0);
}
