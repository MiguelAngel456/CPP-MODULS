/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:56:07 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/22 12:49:58 by mfuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
int main()
{
    std::cout << "----------------GOOD ANIMALS----------------" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "\n\n----------------WRONG ANIMALS----------------" << std::endl;
    const WrongAnimal* metaw = new WrongAnimal();
    const WrongAnimal* iw = new WrongCat();
    std::cout << iw->getType() << " " << std::endl;
    iw->makeSound(); //will output the cat sound!
    metaw->makeSound();
    delete metaw;
    delete iw;
    return 0;
}