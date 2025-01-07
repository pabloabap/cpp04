/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:46:21 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 13:28:42 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_H
# define WRONG_ANIMAL_CLASS_H
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal( void );
		WrongAnimal( WrongAnimal const &src );
		virtual ~WrongAnimal( void );
		
		WrongAnimal	&operator=( WrongAnimal const &src );
		void	makeSound( void ) const;
		std::string	getType( void ) const;
	protected:
		std::string	type;
};

#endif
