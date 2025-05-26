/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:17:10 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 16:28:39 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal* animals[4];

    // Remplir avec 2 chiens et 2 chats
    for (int i = 0; i < 2; ++i)
        animals[i] = new Dog();
    for (int i = 2; i < 4; ++i)
        animals[i] = new Cat();

    std::cout << "\n--- Testing sounds ---" << std::endl;
    for (int i = 0; i < 4; ++i)
        animals[i]->makeSound();  // Polymorphisme OK

    std::cout << "\n--- Deleting animals ---" << std::endl;
    for (int i = 0; i < 4; ++i)
        delete animals[i];

    return 0;
}


