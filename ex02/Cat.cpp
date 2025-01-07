/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:27:26 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 19:42:21 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ): Animal()
{
	std::cout << "Cat - Default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain(); 
}

Cat::Cat( Cat const &src): Animal(src)
{
	std::cout << "Cat - Copy constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain(src.getBrain()); 
}

Cat::~Cat( void )
{
	delete ( this->_brain );
	std::cout << "Cat - Default destructor called" << std::endl;
}

Cat	&Cat::operator=( Cat const &src)
{
	std::cout << "Cat - Copy assignment operator called" << std::endl;
	if ( this != &src )
	{
		this->type = src.type;
		delete this->_brain;
		this->_brain = new Brain(src.getBrain());
	}
	return ( *this );
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat default sound" << std::endl;
}

Brain	&Cat::getBrain( void ) const
{
	return ( *this->_brain );
}
