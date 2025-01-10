/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:00:28 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 18:49:45 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria( void ): _type("materia")
{
	std::cout << "AMateria - Default constructor" << std::endl;
}

AMateria::AMateria( AMateria const &src ): _type(src._type())
{
	std::cout << "AMateria - Copy constructor" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria - Default destructor" << std::endl;
}

AMateria	&AMateria::operator=( AMateria const &src )
{
	std::cout << "AMateria - Copy assignment operator" << std::endl;
	
	if ( this != &src )
		this->_type = src.getType();
	return ( *this );
}

std::string	const &AMateria::getType() const
{
	return ( this->_type );
}

void		AMateria::use( ICharacter &target)
{
	std::cout << "Use called from AMateria from " << target.getName() << std::endl;
}

void		AMateria::setType( std::string const &type )
{
	this->_type = type;
}
