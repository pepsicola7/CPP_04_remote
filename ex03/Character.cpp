/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:06:04 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 20:14:06 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name): Name(name)
{
    int i = 0;
    while (i < 4)
    {
        slot[i] = NULL;
        i++;
    }
}

Character::~Character()
{
    int i = 0;
    while (i < 4)
    {
        delete slot[i];
        i++;
    }
}

Character::Character(const Character& other): Name(other.Name)
{
    int i = 0;
    while (i < 4)
    {
        if (other.slot[i])
            slot[i] = other.slot[i]->clone();
        else
            slot[i] = NULL;
        i++; 
    }
}

Character& Character::operator = (const Character& other)
{
    int i = 0;
    Name = other.Name;
    while (i < 4)
    {
        if (slot[i])
            delete slot[i];
        if (other.slot[i])
            slot[i] = other.slot[i]->clone();
        else
            slot[i] = NULL;
        i++;
    }
    return (*this);
}

std::string const & Character::getName() const{
    return (this->Name);
};

void Character::equip(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if(slot[i])
            i++;
        else
        {
            slot[i] = m;
            return ;
        }
    }
    return ;
};

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 4 || !slot[idx])
        return ;
    slot[idx] = NULL;
};

#include <iostream>

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !slot[idx])
        return;

    slot[idx]->use(target);
};