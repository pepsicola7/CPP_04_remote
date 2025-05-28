/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:22:33 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 20:14:26 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        slot_cpy[i] = NULL;
        i++;
    }
};

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        delete slot_cpy[i];
        i++;
    }
};

MateriaSource::MateriaSource(const MateriaSource& other)
{
    for (int i = 0; i < 4; ++i)
    {
        if (other.slot_cpy[i])
            slot_cpy[i] = other.slot_cpy[i]->clone();  // clone est une fonction virtuelle dans AMateria
        else
            slot_cpy[i] = NULL;
    }
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; ++i)
        {
            delete slot_cpy[i];
            if (other.slot_cpy[i])
                slot_cpy[i] = other.slot_cpy[i]->clone();
            else
                slot_cpy[i] = NULL;
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    if (!m)
        return;
    while (i < 4)
    {
        if (slot_cpy[i] == NULL)
        {
            slot_cpy[i] = m->clone();
            return ;
        }
        i++;
    }
};

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4) 
    {
        if (slot_cpy[i] && slot_cpy[i]->getType() == type) {
            return slot_cpy[i]->clone();
        }
        i++;
    }
    return (NULL);
};