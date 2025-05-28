/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:19:32 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 16:01:57 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::~Ice()
{
}

Ice::Ice(const Ice& other)
{
    this->type = other.type;
}

Ice& Ice::operator = (const Ice& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
};

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};