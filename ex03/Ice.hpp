/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:52:01 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 17:06:57 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
    std::string type;
public:
    Ice();
    ~Ice();
    void    getType();
    std::string setType();
    AMateria* clone() const
    {
        
    };
    void use(ICharacter& target)
    {
        std::cout << "shoots an ice bolt at " << target << std::endl;
    };
};

Ice::Ice(/* args */)
{
}

Ice::~Ice()
{
}
