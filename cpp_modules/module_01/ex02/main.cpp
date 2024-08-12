/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:47:15 by mfuente-          #+#    #+#             */
/*   Updated: 2024/07/26 11:33:04 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string word = "HI THIS IS BRAIN";
	std::string *ptr = &word;
	std::string &ref = word;

	std::cout << "The word is: " << word << "\n";
	std::cout << "The pointer is: " << *ptr << "\n";
	std::cout << "The reference is: " << ref << "\n\n";

	std::cout << "The word address is: " << &word << "\n";
	std::cout << "The pointer address is: " << ptr << "\n";
	std::cout << "The reference address is: " << &ref << "\n";
}