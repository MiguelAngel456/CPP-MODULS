/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 16:45:34 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/08 12:12:54 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
void test_comparisons(Fixed &a, Fixed &b)
{
    std::cout << "TEST: " << a << " < " << b << ": "<< std::boolalpha << (a < b) << "\n";
    std::cout << "TEST: " << b << " < " << a << ": " << (b < a) << "\n";
    std::cout << "TEST: " << a << " <= " << b << ": " << (a <= b) << "\n";
    std::cout << "TEST: " << b << " <= " << a << ": " << (b <= a) << "\n";
    std::cout << "TEST: " << a << " > " << b << ": " << (a > b) << "\n";
    std::cout << "TEST: " << b << " > " << a << ": " << (b > a) << "\n";
    std::cout << "TEST: " << a << " >= " << b << ": " << (a >= b) << "\n";
    std::cout << "TEST: " << b << " >= " << a << ": " << (b >= a) << "\n";
    std::cout << "TEST: " << b << " == " << a << ": " << (b == a) << "\n";
    std::cout << "TEST: " << b << " != " << a << ": " << (b != a) << "\n";
}

void test_arithmetic(Fixed &a, Fixed &b)
{
    std::cout << "TEST: " << a << " + " << b << ":\n" << (a + b) << "\n";
    std::cout << "TEST: " << b << " + " << a << ":\n" << (b + a) << "\n";
    std::cout << "TEST: " << a << " - " << b << ":\n" << (a - b) << "\n";
    std::cout << "TEST: " << b << " - " << a << ":\n" << (b - a) << "\n";
    std::cout << "TEST: " << a << " * " << b << ":\n" << (a * b) << "\n";
    std::cout << "TEST: " << b << " * " << a << ":\n" << (b * a) << "\n";
    std::cout << "TEST: " << a << " / " << b << ":\n" << (a / b) << "\n";
    std::cout << "TEST: " << b << " / " << a << ":\n" << (b / a) << "\n";
}

void test_min_max(Fixed &a, Fixed &b)
{
    std::cout << "TEST: min(" << a << ", " << b << "): " << Fixed::min(a, b) << "\n";
    std::cout << "TEST: max(" << b << ", " << a << "): " << Fixed::max(b, a) << "\n";
    std::cout << "TEST: min(" << b << ", " << a << "): " << Fixed::min(b, a) << "\n";
    std::cout << "TEST: max(" << a << ", " << b << "): " << Fixed::max(a, b) << "\n";
}

void	test_subject(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
}

int main(void)
{
    Fixed a(20);
    Fixed b(40);

    test_comparisons(a, b);
    std::cout << "\n\n\n";
    test_arithmetic(a, b);
    std::cout << "\n\n\n";
    test_min_max(a, b);
    std::cout << "\n\n\n";
    test_subject();
	return (0);
}