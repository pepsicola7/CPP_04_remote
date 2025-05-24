/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 17:40:00 by peli              #+#    #+#             */
/*   Updated: 2025/05/22 18:11:42 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Constructor of Cat is called" << std::endl;
    type = "Cat";
    brain = new Brain;
};

Cat::~Cat()
{
    std::cout << "Destructor of Cat is called" << std::endl;
    delete brain;
};

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copied" << std::endl;
    type = other.type;
    brain = new Brain(*other.brain);
}

Cat& Cat::operator = (const Cat& other)
{
    std::cout << "Cat assigned" << std::endl;
    if (this != &other)
    {
        type = other.type;
        brain = new Brain(*other.brain);
    }
    return (*this);
}

void    Cat::setideas(int index, const std::string& idea)
{
    brain->setideas(index, idea);
}

void    Cat::getideas(int i) const
{
    std::cout << "Dog idea is :" << brain->getideas(i) << std::endl;
}