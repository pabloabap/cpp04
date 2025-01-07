/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:27:35 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 12:53:00 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_H
# define CAT_CLASS_H
# include <string>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( Cat const &src );
		~Cat( void );
		
		Cat	&operator=( Cat const &src );
		void	makeSound( void ) const;
};

#endif
