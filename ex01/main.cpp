/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:17:10 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 11:48:51 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() 
{
    const int size = 4;
    Animal* animals[size];

    std::cout << "\n--- Creating Animals ---\n" << std::endl;
    for (int i = 0; i < size; ++i) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n--- Testing Deep Copy ---\n" << std::endl;
    Dog basicDog;
    basicDog.setideas(0, "I love bones! 🦴");

    Dog copyDog = basicDog;  // calls copy constructor
    copyDog.setideas(0, "No! I prefer chasing cats 🐱");

    std::cout << "Original Dog idea: ";
    basicDog.getideas(0);
    std::cout << "Copied Dog idea: ";
    copyDog.getideas(0);

    std::cout << "\n--- Deleting Animals ---\n" << std::endl;
    for (int i = 0; i < size; ++i)
        delete animals[i];

    return 0;
}

