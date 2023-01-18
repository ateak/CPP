/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ateak <ateak@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:35:11 by ateak             #+#    #+#             */
/*   Updated: 2023/01/18 21:12:09 by ateak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	std::cout << "Subject test" << std::endl;
	std::cout << std::endl;
	const Animal* j = new Dog(); 
	const Animal* i = new Cat();
	
	delete j;//should not create a leak 
	delete i;
	std::cout << std::endl;
	std::cout << std::endl;
	
	// Constructors and destructors check
	const int size = 4;
	Animal *animals[size];
	for (int i = 0; i < size/2; ++i)
		animals[i] = new Dog;
	for (int i = size/2; i < size; ++i)
		animals[i] = new Cat;
	for (int i = 0; i < size; ++i)
		delete animals[i];

	// copy, operator= check	
	{
		Cat	murka;
		murka.getBrain()->setIdea(0, "sleep");
		murka.makeSound();
		Cat	barsik(murka);
		barsik.makeSound();
		std::cout << std::endl;

		std::cout << "murka brain ideas address: " << murka.getBrain()->getIdeas() << std::endl;
		std::cout << "barsik brain ideas address: " << barsik.getBrain()->getIdeas() << std::endl;
		std::cout << "murka brain ideas[0]: " << murka.getBrain()->getIdeas()[0] << std::endl;
		std::cout << "barsik brain ideas[0]: " << barsik.getBrain()->getIdeas()[0] << std::endl;
		
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	Dog tuzik;
	tuzik.getBrain()->setIdea(0, "eat");
	tuzik.makeSound();
	Dog rex;
	rex = tuzik;
	rex.makeSound();
	std::cout << std::endl;
	
	std::cout << "tuzik brain ideas address: " << tuzik.getBrain()->getIdeas() << std::endl;
	std::cout << "rex brain ideas address: " << rex.getBrain()->getIdeas() << std::endl;
	std::cout << "tuzik brain ideas[0]: " << tuzik.getBrain()->getIdeas()[0] << std::endl;
	std::cout << "rex brain ideas[0]: " << rex.getBrain()->getIdeas()[0] << std::endl;
	std::cout << std::endl;
	return (0);
}
