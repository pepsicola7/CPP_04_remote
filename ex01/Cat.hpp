/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:09:42 by peli              #+#    #+#             */
/*   Updated: 2025/05/22 18:11:56 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"

class Cat: public Animal
{
private:
    Brain*   brain;
public:
    Cat();
    ~Cat();
    Cat(const Cat& other);
    Cat& operator = (const Cat& other);
    void    setideas(int index, const std::string& idea);
    void    getideas(int i) const;
    void    makeSound() const
    {
        std::cout << "Cat miao~ miao~" << std::endl;
    };
    std::string getType() const
    {
        return (this->type);   
    };
};
