/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:36:14 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/16 18:48:49 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

static bool isInteger(const char* str) {
    char* endPtr;

    while (std::isspace(*str)) {
        str++; 
    }
    if (*str == '-') {
        return false;
    }
    std::strtol(str, &endPtr, 10);
    return (*endPtr == '\0');
}



void error(std::string str)
{
	std::cout << "ERROR: " + str << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc < 3)
        error("WRONG ARG COUNT");
	PmergeMe merge;

	for (int i = 1; argv[i]; i++)
	{
        if (isInteger(argv[i]) == false)
            error("NUMBER NOT INTEGER");
		try
		{
			merge.addnumbers(argv[i]);
		}
		catch(const char *what)
		{
			std::cout << what << '\n';
			return (1);
		}
	}

	merge.sort();
	
	return (0);
}