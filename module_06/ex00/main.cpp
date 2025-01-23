/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:56:51 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/05 12:01:38 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout <<  "Error: Invalid number of arguments\n" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}