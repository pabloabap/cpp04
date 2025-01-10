/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:36:51 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 19:13:51 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice( void ): AMateria()
{
	std::cout << "Ice - Default constructor" << std::endl;
	this->_type = "ice";
}

Ice::Ice( Ice const &src ): AMateria(src)
{
	std::cout << "Ice - Copy constructor" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Ice - Default destructor" << std::endl;
}

Ice	&Ice::operator=( Ice const &src )
{
	std::cout << "Ice - Copy assignment operator" << std::endl;
	
	if ( this != &src )
		this->_type = src._type;
	return ( *this );
}

Ice	*Ice::clone() const
{
	return ( new Ice( *this ));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
