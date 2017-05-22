/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:04:21 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 15:45:45 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.cpp"

class	Phonebook;
int	search_list(Phonebook *contact, int num_of_contacts);
int	choose_contact(Phonebook *);
Phonebook	add_contact(Phonebook *new_contact);
