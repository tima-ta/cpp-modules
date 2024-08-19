/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fraqioui <fraqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 08:59:26 by fraqioui          #+#    #+#             */
/*   Updated: 2023/09/25 13:14:53 by fraqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"
#include"Dog.hpp"
#include"WrongCat.hpp"
#include<new>

int main(void)
{
    std::cout << ":::::::::::::::::::Animal:::::::::::::::::::" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;

    std::cout << ":::::::::::::::::::::WrongAnimal::::::::::::" << std::endl;
    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongi = new WrongCat();
    
    std::cout << wrongi->getType() << " " << std::endl;
    wrongi->makeSound();
    wrongmeta->makeSound();

    delete wrongmeta;
    delete wrongi;
    return 0;
}
