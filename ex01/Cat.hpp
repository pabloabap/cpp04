/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:27:35 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 19:30:35 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( Cat const &src );
		~Cat( void );
		
		Cat	&operator=( Cat const &src );
		void	makeSound( void ) const;
		Brain	&getBrain( void ) const;
	private:
		Brain	*_brain;
};

#endif
