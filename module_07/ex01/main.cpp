/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:08:55 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/09 14:09:01 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	{
		int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		iter(array, sizeof(array) / sizeof(array[0]), print);
		iter(array, sizeof(array) / sizeof(array[0]), increment);
		std::cout << "\n";
		iter(array, sizeof(array) / sizeof(array[0]), print);
	}

	{
		char string[] = "This is a test";
		iter(string, sizeof(string), print);
	}
	return (0);
}