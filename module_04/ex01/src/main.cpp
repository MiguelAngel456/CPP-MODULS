/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfuente- <mfuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:56:07 by mfuente-          #+#    #+#             */
/*   Updated: 2024/08/23 16:26:24 by mfuente-         ###   ########.fr       */
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
    i->getBrain()->setIdeas(0, "play with ball of wool");
    j->getBrain()->setIdeas(0, "play with soccer ball");
    meta->makeSound();
    std::cout<< i->getBrain()->getIdeas()[0] << std::endl;
    std::cout<< j->getBrain()->getIdeas()[0] << std::endl;
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