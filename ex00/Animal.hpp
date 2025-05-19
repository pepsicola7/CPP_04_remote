/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:09:03 by peli              #+#    #+#             */
/*   Updated: 2025/05/19 15:41:40 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    virtual std::string    getType() const;
    virtual void makeSound() const;
};
