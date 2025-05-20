/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:09:34 by peli              #+#    #+#             */
/*   Updated: 2025/05/20 14:33:17 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
private:
    Brain*   Brain;
public:
    Dog();
    ~Dog();
    void    makeSound() const
    {
        std::cout << "Dog Wof~ Wof~" << std::endl;
    };
    std::string getType() const
    {
        return (this->type);
    };
};

Dog::Dog()
{
    std::cout << "Constructor of Dog is called" << std::endl;
    type = "Dog";
    Brain Dog_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called" << std::endl;
    delete Dog_brain;
}