/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:10:48 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 16:12:09 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

Animal::Animal()
{
    std::cout << "Constructor of Animal is called" << std::endl;
    type = "Animal";
}

Animal::~Animal()
{
    std::cout << "Destructor of Animal is called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Animal makes some sounds" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}