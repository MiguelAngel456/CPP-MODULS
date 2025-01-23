/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:02:25 by mfuente-          #+#    #+#             */
/*   Updated: 2024/12/06 12:31:20 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

int main(void)
{
	Data data;
	std::cout << "Data address: " << &data << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Raw address: " << raw << std::endl;
	Data *other = Serializer::deserialize(raw);
	std::cout << "Deserialized address: " << other << std::endl;
    return (0);
}
