/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:45:13 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 16:49:32 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    ~AMateria();
    AMateria(std::string const & type);
    [...]
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};