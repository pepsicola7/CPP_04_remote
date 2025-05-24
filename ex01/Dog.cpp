/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 16:47:38 by peli              #+#    #+#             */
/*   Updated: 2025/05/22 18:11:15 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Constructor of Dog is called" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog copied" << std::endl;
    type = other.type;
    brain = new Brain(*other.brain);
}

Dog& Dog::operator = (const Dog& other)
{
    std::cout << "Dog assigned" << std::endl;
    if (this != &other)
    {
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

void    Dog::setideas(int index, const std::string& idea)
{
    brain->setideas(index, idea);
}

void    Dog::getideas(int i) const
{
    std::cout << "Dog idea is :" << brain->getideas(i) << std::endl;
}