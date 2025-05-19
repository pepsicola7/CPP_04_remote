/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:02:38 by peli              #+#    #+#             */
/*   Updated: 2025/05/19 17:04:39 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor of WrongAnimal is called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor of WrongAnimal is called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes some sounds" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}