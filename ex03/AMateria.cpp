/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:45:42 by peli              #+#    #+#             */
/*   Updated: 2025/05/28 17:21:16 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    
};

AMateria::~AMateria()
{
    
};
    
AMateria::AMateria(std::string const & type): type(type)
{

};

std::string const & AMateria::getType() const
{
    return (this->type);
}; //Returns the materia type