/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:06:16 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 18:41:00 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(const Dog &copy);
	virtual ~Dog();
	Dog& operator=(const Dog &value);

	void makeSound() const;
	Brain *getBrain() const;
};


#endif