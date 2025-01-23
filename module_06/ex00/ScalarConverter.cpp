/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:47:32 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/10 12:11:29 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter created" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destroyed" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
    std::cout << "ScalarConverter copied" << std::endl;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter& otro)
{
	(void)otro;
    return (*this);
}
        
//METHODS

static int	float_checker(char *str, int *i, int *check)
{
	int	sym_lock;

	sym_lock = 0;
	while (str[*i])
	{
		if (str[*i] == '.')
		{
			if (sym_lock++ == 0 && str[*i + 1] >= '0' && str[*i + 1] <= '9')
				(*check)++;
		}
		if (str[*i] >= '0' && str[*i] <= '9')
			(*check)++;
		(*i)++;
	}
	if (str[*i - 1] == 'f' && ((*check + 1) == *i))
		(*check)++;
	return (sym_lock && (*check == *i));
}

static int	ft_str_islf(char *str)
{
	int	i;
	int	check;
	int	sym_lock;

	i = -1;
	check = 0;
	sym_lock = 0;
	if (!*str)
		return (0);
	while (str[++i] && str[i] != '.')
	{
		if (str[0] == '-' || str[0] == '+')
		{
			if (sym_lock++ == 0 && str[i + 1] >= '0' && str[i + 1] <= '9')
				check++;
		}
		if (str[i] >= '0' && str[i] <= '9')
			check++;
	}
	if (check == 0)
		return (0);
	return (float_checker(str, &i, &check) + (check == i));
}


void ScalarConverter::convert(char *str)
{
    if (!str)
    {
        std::cout << "Error: string is a empty" << std::endl;
    }


	char c = static_cast<char>(atoi(str));
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << "'" << c << "'" << std::endl;
	else if (ft_str_islf(str) == 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;

	//INTS
	long num = atol(str);
	std::cout << "int: ";
	if (num > 2147483647 || num < -2147483648
		|| ft_str_islf(str) == 0)
		std::cout << "impossible" << std::endl;
	else
		std::cout << num << std::endl;

	//FLOATS
	float f = atof(str);
	std::cout << "float: ";
	if (*str)
	{
		if (std::floor(f) == num && std::ceil(f) == num)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;

	//DOUBLE
	double d = atof(str);
	std::cout << "double: ";
	if (*str)
	{
		if (std::floor(d) == num && std::ceil(d) == num)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
}