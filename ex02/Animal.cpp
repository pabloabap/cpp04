/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:51:54 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 20:44:12 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal( void ): type( "Animal" )
{
	std::cout << "Animal - Default constructor called" << std::endl;
}

Animal::Animal( Animal const &src): type( src.type )
{
	std::cout << "Animal - Copy constructor called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal - Default destructor called" << std::endl;
}

Animal	&Animal::operator=( Animal const &src)
{
	std::cout << "Animal - Copy assignment operator called" << std::endl;
	if ( this != &src )
		this->type = src.type;
	return ( *this );
}

std::string Animal::getType( void ) const
{
	return ( this->type );
}
