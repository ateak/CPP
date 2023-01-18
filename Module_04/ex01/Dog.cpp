/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:07:30 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 18:42:18 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog"), brain(new Brain)
{
	std::cout << "Default constructor for Dog" << std::endl;
}
Dog::Dog(const Dog &copy) : brain(new Brain)
{
	std::cout << "Copy constructor for Dog" << std::endl;
	*this = copy;
}
Dog::~Dog()
{
	std::cout << "Destructor for Dog" << std::endl;
	delete brain;
}
Dog &Dog::operator=(const Dog &value)
{
	if (this == &value)
		return *this;
	this->type = value.type;
	*this->brain = *(value.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof woof" << std::endl;
}

Brain *Dog::getBrain() const
{
	return brain;
}