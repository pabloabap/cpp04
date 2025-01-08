/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:10:06 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 18:05:43 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Character.hpp"


Character::Character( void ): _name("Undefined"), \
	_storageCapacity( sizeof(this->_inventory) / sizeof(AMateria *) )
{
	std::cout << "Character - Default constructor" << std::endl;
	std::cout << "_inventory" << sizeof(this->_inventory << "AMat*" \
		<< sizeof(AMateria *) << "items" << sizeof(this->_inventory) / sizeof(AMateria *)
	for ( int i = 0; i < this->_storageCapacity; i++)
		this->_inventory[i] = NULL;
}

Character::Character( std::string const name ): _name(name), \
	_storageCapacity( sizeof(this->_inventory) / sizeof(AMateria *) )
{
	std::cout << "Character - Named constructor" << std::endl;
	std::cout << "_inventory" << sizeof(this->_inventory << "AMat*" \
		<< sizeof(AMateria *) << "items" << sizeof(this->_inventory) / sizeof(AMateria *)
	for ( int i = 0; i < this->_storageCapacity; i++)
		this->_inventory[i] = NULL;
}

Character::Character( Character const &src): _name(src._name)
{
	std::cout << "Character - Copy constructor called" << std::endl;
	*this = src;
}

Character::~Character( void )
{
	std::cout << "Character - Default destructor called" << std::endl;
}

Character	&Character::operator=(Character const &src)
{
	std::cout << "Character - Copy assignment operator called" << std::endl;
	if ( this != &src )
	{
		this->_name = src._name;
		this->_storageCapacity = src._storageCapacity;
		for ( int i = 0; i < sizeof(this->_inventory) / sizeof(AMateria *); i++)
		{
			if (this->_invetory[i] != NULL)
				delete( this->_inventory[i] );
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return ( *this );
}

std::string const	&Character::getName( void ) const
{
	return ( this->_name );	
}

void			Character::setName( std::string name )
{
	this->_name = name;
}

virtual void			Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if ( NULL == this->_inventory[i] )
	}
}

virtual void			Character::unequip(int idx)
{

}

virtual void			Character::use(int idx, ICharacter &target)
{

}

