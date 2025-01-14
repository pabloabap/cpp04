/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_noAbstractAnimal.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 12:16:37 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/10 12:16:39 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main (void) 
{
	Animal *animals[10];
	
	for ( int i = 0; i < 10; i++)
	{
		if (i < 5 )
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	delete animals[9];
	dynamic_cast<Dog*>(animals[0])->getBrain().setIdea("Dog Idea", 0);
	animals[9] = new Dog(*(dynamic_cast<Dog*>(animals[0])));
	delete animals[0];
	/*
	std::cout << "---DEFAULT DOG 0, IDEA 0---\n" \
		<< animals[0]->getBrain().getIdea(0) << std::endl;
	std::cout << "---DOG 0, IDEA 0 AFTER SET---\n" \
		<< animals[0]->getBrain().getIdea(0) << std::endl;
	*/
	std::cout << "---COPIEAD DOG BEFORE SET---\n" \
		<< dynamic_cast<Dog*>(animals[9])->getBrain().getIdea(0) << std::endl;
	std::cout  << "--- DEFAULT CAT 8, IDEA 0---\n" \
		<< dynamic_cast<Cat*>(animals[8])->getBrain().getIdea(0) << std::endl;
	dynamic_cast<Cat*>(animals[8])->getBrain().setIdea("Cat Idea", 0);
	delete animals[9];
	animals[9] = new Cat(*(dynamic_cast<Cat*>(animals[8])));
	std::cout  << "--- CAT 8, IDEA 0 AFTER SET---\n" \
		<< dynamic_cast<Cat*>(animals[8])->getBrain().getIdea(0) << std::endl;
	std::cout << "---COPIEAD CAT AFTER SET---\n" \
		<< dynamic_cast<Cat*>(animals[9])->getBrain().getIdea(0) << std::endl;
	animals[0] = new Cat(*(dynamic_cast<Cat*>(animals[9])));;
	for ( int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return (0);
}
