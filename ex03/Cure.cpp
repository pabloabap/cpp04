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
}

Cure::~Cure( void )
{
	std::cout << "Cure - Default destructor" << std::endl;
}

Cure	&Cure::operator=( Cure const &src )
{
	std::cout << "Cure - Copy assignment operator" << std::endl;
	
	if ( this != &src )
		this->_type = src._type;
	return ( *this );
}

Cure	*Cure::clone() const
{
	return ( new Cure( *this ));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
