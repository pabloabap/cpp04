/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:51:54 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 12:56:43 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type( "WrongAnimal" )
{
	std::cout << "WrongAnimal - Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src): type( src.type )
{
	std::cout << "WrongAnimal - Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal - Default destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &src)
{
	std::cout << "WrongAnimal - Copy assignment operator called" << std::endl;
	if ( this != &src )
		this->type = src.type;
	return ( *this );
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal default sound" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
	return ( this->type );
}
