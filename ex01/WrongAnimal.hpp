/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:01:38 by peli              #+#    #+#             */
/*   Updated: 2025/05/19 17:03:59 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
     ~WrongAnimal();
    std::string    getType() const;
    void makeSound() const;
};