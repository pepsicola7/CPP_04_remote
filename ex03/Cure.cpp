/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:10:05 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 17:22:59 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::~Cure()
{
}

Cure::Cure(const Cure& other)
{
    this->type = other.type;
}

Cure& Cure::operator = (const Cure& other)
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

AMateria* Cure::clone() const
{
    return new Cure();
};

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
};