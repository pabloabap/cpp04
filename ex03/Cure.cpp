/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:36:15 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 15:08:23 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure( void ): AMateria()
{
	std::cout << "Cure - Default constructor" << std::endl;
	this->_type = "cure";
}

Cure::Cure( Cure const &src ):AMateria(src)
{
	std::cout << "Cure - Copy constructor" << std::endl;
	*this = src;
}

Materia::~Cure( void )
{
	std::cout << "Cure - Default destructor" << std::endl;
}

Amateria	&Cure::operator=( Cure const &src )
{
	std::cout << "Cure - Copy assignment operator" << std::endl;
	
	if ( this != &src )
		this->_type = src.getType():
	return ( *this );
}
