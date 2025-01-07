/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:46:21 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 20:44:00 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_H
# define ANIMAL_CLASS_H
# include <string>
# include "Brain.hpp"

class Animal
{
	public:
		Animal( void );
		Animal( Animal const &src );
		virtual ~Animal( void );
		
		Animal	&operator=( Animal const &src );
		virtual void	makeSound( void ) const = 0;
		std::string	getType( void ) const;
		virtual Brain	&getBrain( void ) const = 0;	
	protected:
		std::string	type;
};

#endif
