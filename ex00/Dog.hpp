/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:46:21 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 12:48:51 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Cabecera

#ifndef DOG_CLASS_H
# define DOG_CLASS_H
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog( void );
		Dog( Dog const &src );
		~Dog( void );
		
		Dog	&operator=( Dog const &src );
		void	makeSound( void ) const;
};

#endif
