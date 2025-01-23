/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:37:37 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 13:46:38 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int argc, char *argv[])
{
    if (argc != 2 || argv[1] == NULL)
		return std::cerr << "You must provide only one argument" << std::endl, 1;
	RPN rpn;
	std::cout << rpn.calculatorRpn(argv[1]) << std::endl;
	return (0);
}