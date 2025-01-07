/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:35:10 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 13:35:41 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main (void) 
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimal* w_meta = new WrongAnimal();
	const WrongAnimal* w_i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "___WRONG___" << std::endl;
	std::cout << w_i->getType() << " " << std::endl;
	w_i->makeSound(); //will output the cat sound!
	w_meta->makeSound();
	std::cout << "-----------" << std::endl;
	delete(meta);
	delete(j);
	delete(i);
	delete(w_meta);
	delete(w_i);
	return (0);
}
