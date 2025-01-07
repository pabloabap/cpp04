/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:08:13 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 13:29:52 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal()
{
	std::cout << "WrongCat - Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const &src): WrongAnimal(src)
{
	std::cout << "WrongCat - Copy constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat - Default destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &src)
{
	std::cout << "WrongCat - Copy assignment operator called" << std::endl;
	if ( this != &src )
		this->type = src.type;
	return ( *this );
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "WrongCat default sound" << std::endl;
}

