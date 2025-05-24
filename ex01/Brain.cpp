/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:14:13 by peli              #+#    #+#             */
/*   Updated: 2025/05/22 18:13:06 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor of the brain is called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor of the brain is called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copied" << std::endl;
    int i = 0;
    while (i < 100)
    {
        ideas[i] = other.ideas[i];
        i++;
    }
}

Brain& Brain::operator = (const Brain& other)
{
    std::cout << "Brain assigned" << std::endl;
    if (this != &other)
    {
        int i = 0;
        while (i < 100)
        {
            ideas[i] = other.ideas[i];
            i++;
        }
    }
    return (*this);
}

void    Brain::setideas(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
    {
        ideas[index] = idea;
    }
}

std::string    Brain::getideas(int i)
{
    // std::cout << ideas[i] << std::endl;
    if (i >= 0 && i < 100)
    {
        return (ideas[i]);
    }
    return ("Index is invalide");
}