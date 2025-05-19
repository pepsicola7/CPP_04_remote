/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:09:34 by peli              #+#    #+#             */
/*   Updated: 2025/05/19 15:42:21 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
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
}

Dog::~Dog()
{
    std::cout << "Destructor of Dog is called" << std::endl;
}