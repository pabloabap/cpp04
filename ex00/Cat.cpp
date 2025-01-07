/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:27:26 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 12:53:42 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"

Cat::Cat( void ): Animal()
{
	std::cout << "Cat - Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat( Cat const &src): Animal(src)
{
	std::cout << "Cat - Copy constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat( void )
{
	std::cout << "Cat - Default destructor called" << std::endl;
}

Cat	&Cat::operator=( Cat const &src)
{
	std::cout << "Cat - Copy assignment operator called" << std::endl;
	if ( this != &src )
		this->type = src.type;
	return ( *this );
}

void	Cat::makeSound( void ) const
{
	std::cout << "Cat default sound" << std::endl;
}

