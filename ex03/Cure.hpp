/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:52:55 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 17:20:00 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(const Cure& other);
    Cure& operator = (const Cure& other);

    AMateria* clone() const;
    void use(ICharacter& target);
};

