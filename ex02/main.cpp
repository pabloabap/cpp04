/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:35:10 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 20:46:00 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main (void) 
{
	Animal *animals[10];
//	Animal	abs;
	
	for ( int i = 0; i < 10; i++)
	{
		if (i < 5 )
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	delete animals[9];
	animals[9] = new Dog(*(dynamic_cast<Dog*>(animals[0])));
	std::cout << "---DEFAULT DOG 0, IDEA 0---\n" \
		<< animals[0]->getBrain().getIdea(0) << std::endl;
	animals[0]->getBrain().setIdea("Dog Idea", 0);
	std::cout << "---DOG 0, IDEA 0 AFTER SET---\n" \
		<< animals[0]->getBrain().getIdea(0) << std::endl;
	std::cout << "---COPIEAD DOG BEFORE SET---\n" \
		<< animals[9]->getBrain().getIdea(0) << std::endl;
	std::cout  << "--- DEFAULT CAT 8, IDEA 0---\n" \
		<< animals[8]->getBrain().getIdea(0) << std::endl;
	animals[8]->getBrain().setIdea("Cat Idea", 0);
	delete animals[9];
	animals[9] = new Cat(*(dynamic_cast<Cat*>(animals[8])));
	std::cout  << "--- CAT 8, IDEA 0 AFTER SET---\n" \
		<< animals[8]->getBrain().getIdea(0) << std::endl;
	std::cout << "---COPIEAD CAT AFTER SET---\n" \
		<< animals[9]->getBrain().getIdea(0) << std::endl;
	for ( int i = 0; i < 10; i++)
	{
		delete animals[i];
	}
	return (0);
}
