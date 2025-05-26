/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:31:29 by peli              #+#    #+#             */
/*   Updated: 2025/05/26 18:12:44 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string Name;
    AMateria*   slot[4];
public:
    Character(const std::string& name);
    ~Character();
    Character(const Charcter& other);
    Character& operator = (const Character& other);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

Character::Character(/* args */)
{
}

Character::~Character()
{
}
