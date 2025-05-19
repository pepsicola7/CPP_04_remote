/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:09:42 by peli              #+#    #+#             */
/*   Updated: 2025/05/19 15:42:39 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
public:
    Cat()
    {
        std::cout << "Constructor of Cat is called" << std::endl;
        type = "Cat";
    };
    ~Cat()
    {
        std::cout << "Destructor of Cat is called" << std::endl;
    };
    void    makeSound() const
    {
        std::cout << "Cat miao~ miao~" << std::endl;
    };
    std::string getType() const
    {
        return (this->type);   
    };
};
