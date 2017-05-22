/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 10:00:22 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 10:34:55 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char myuppercase(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc > 1)
	{
		j = 1;
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				std::cout << myuppercase(argv[j][i]);
				i++;
			}
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << "\n";
	return (0);
}
