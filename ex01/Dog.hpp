/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:09:34 by peli              #+#    #+#             */
/*   Updated: 2025/05/22 18:09:15 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain*   brain;
public:
    Dog();
    ~Dog();
    Dog(const Dog &other);
    Dog& operator = (const Dog& other);
    void    setideas(int index, const std::string& idea);
    void    getideas(int i) const;
    void    makeSound() const
    {
        std::cout << "Dog Wof~ Wof~" << std::endl;
    };
    std::string getType() const
    {
        return (this->type);
    };
};
