/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:08:28 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 19:42:09 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

Dog::Dog( void ): Animal()
{
	std::cout << "Dog - Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain(); 
}

Dog::Dog( Dog const &src): Animal(src)
{
	std::cout << "Dog - Copy constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain(*src._brain); 
}

Dog::~Dog( void )
{
	delete ( this->_brain );
	std::cout << "Dog - Default destructor called" << std::endl;
}

Dog	&Dog::operator=( Dog const &src)
{
	std::cout << "Dog - Copy assignment operator called" << std::endl;
	if ( this != &src )
	{
		this->type = src.type;
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
	}
	return ( *this );
}

void	Dog::makeSound( void ) const
{
	std::cout << "Dog default sound" << std::endl;
}

Brain	&Dog::getBrain( void ) const
{
	return ( *this->_brain );
}
