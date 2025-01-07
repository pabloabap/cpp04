/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:27:35 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 13:28:09 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_CLASS_H
# define WRONG_CAT_CLASS_H
# include <string>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( WrongCat const &src );
		~WrongCat( void );
		
		WrongCat	&operator=( WrongCat const &src );
		void	makeSound( void ) const;
};

#endif
