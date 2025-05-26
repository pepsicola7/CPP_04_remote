/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:06:04 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 18:24:52 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name): Name(name)
{
    int i = 0;
    while (i < 4)
    {
        slot[i] = nullptr;
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
Character::Character(const Character& other)
{
    int i = 0;
    while (i < 4)
    {
        slot = other.slot[i];
        i++;
    }
}

Character::Character& operator = (const Character& other)
{

}

std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);