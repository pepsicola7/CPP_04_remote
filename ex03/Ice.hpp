/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:52:01 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 17:20:47 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    Ice(const Ice& other);
    Ice& operator = (const Ice& other);

    AMateria* clone() const;
    void use(ICharacter& target);
};

