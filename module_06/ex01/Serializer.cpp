/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:16:35 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/05 16:56:05 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Default constructor called\n" << std::endl;
}

Serializer::Serializer(const Serializer &Serializer)
{
	std::cout << "Copy constructor called\n" << std::endl;
	(void)Serializer;
}

Serializer &Serializer::operator=(const Serializer &Serializer)
{
    std::cout << "Copy assignment operator called\n" << std::endl;
    (void)Serializer;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Destructor called\n" << std::endl;
}


uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}