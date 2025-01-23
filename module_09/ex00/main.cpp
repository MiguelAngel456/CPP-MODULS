/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:12:03 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 18:52:18 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void error(std::string str)
{
	std::cerr << "ERROR: " << str << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		error("could not open file.");
	}

	try
	{
		BitcoinExchange exchange;
		exchange.parse_file(argv[1]);
	}
	catch(const char *e)
	{
		error(e);
	}
	
	return (0);
}