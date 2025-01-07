/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:20:52 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 19:39:36 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

static std::string append_int_to_string(const std::string &s, int i);

Brain::Brain( void )
{
	std::string	base_idea = "Idea_";

	std::cout << "Brain default constructor" << std::endl;
	for ( int i = 0; i < 100; i++ )
	{
		this->_ideas[i] = append_int_to_string(base_idea, i);
	}	
}

Brain::Brain( Brain const &src )
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = src;	
}

Brain::~Brain( void )
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain	&Brain::operator=( Brain const &src )
{
	std::cout << "Brain copy assignment operator" << std::endl;

	if (this != &src)
	{
		for ( int i = 0; i < 100; i++ )
		{
			this->_ideas[i] = src._ideas[i];
		}
	}
	return ( *this );
}	

const std::string	&Brain::getIdea( int const &i ) const
{
	if ( i >= 0 && i < 100 )
		return ( this->_ideas[i] );
	else
		return ( this->_ideas[0]);
}

const std::string	*Brain::getAllIdeas( void ) const
{
	return (this->_ideas);
}

void			Brain::setIdea( std::string const &new_idea, int const &idea_num )
{
	if ( idea_num >= 0 && idea_num < 100 )
		this->_ideas[idea_num] = new_idea;
	else
		std::cout << "Idea out of range [0 - 99]. Ideas not updated" << std::endl;
}

void			Brain::setAllIdeas(std::string const (&newIdeas)[100])
{
	for ( int i = 0; i < 100; i++ )
	{
		this->_ideas[i] = newIdeas[i];
	}
}

static std::string append_int_to_string(const std::string &s, int i)
{
	std::ostringstream oss;
	oss << s << i;
	return (oss.str());
}
