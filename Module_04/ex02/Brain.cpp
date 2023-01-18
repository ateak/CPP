/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:21:18 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 18:23:18 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Default constructor for Brain" << std::endl;
}
Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor for Brain" << std::endl;
	*this = copy;
}
Brain::~Brain()
{
	std::cout << "Destructor for Brain" << std::endl;
}
Brain &Brain::operator=(const Brain &value)
{
	if (this == &value)
		return *this;
	for (int i = 0; i < 100; ++i)
		this->setIdea(i, value.getIdeas()[i]);
	return *this;
}

const std::string *Brain::getIdeas() const
{
	return ideas;
}
void Brain::setIdea(unsigned int index, const std::string &idea)
{
	if (index >= 100)
		std::cout << index << " index is wrong(more than 99)" << std::endl;
	ideas[index] = idea;
}