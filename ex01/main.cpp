/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:17:10 by peli              #+#    #+#             */
/*   Updated: 2025/05/22 14:54:44 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int size = 4;
    Animal*  animal[size];
    
    int i = 0;
    while (i < size / 2)
    {
        animal[i] = new Dog;
        i++;
    }
    while (i < size)
    {
        animal[i] = new Cat;
        i++;
    }
    
    return 0;
}
