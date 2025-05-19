/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:03:11 by peli              #+#    #+#             */
/*   Updated: 2025/05/19 17:05:32 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    WrongCat()
    {
        std::cout << "Constructor of WrongCat is called" << std::endl;
        type = "Cat";
    };
    ~WrongCat()
    {
        std::cout << "Destructor of WrongCat is called" << std::endl;
    };
    void    makeSound() const
    {
        std::cout << "WrongCat  miao~ miao~" << std::endl;
    };
    std::string getType() const
    {
        return (this->type);   
    };
};