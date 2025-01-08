/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:36:57 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 18:53:01 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_CLASS_HPP
# define ICHARACTER_CLASS_HPP

# include <string>
# include "AMateria.hpp"

class AMateria;

class	ICharacter
{
	public:
		virtual ~ICharacter() {};
		virtual std::string const	&getName( void ) const = 0;
		virtual void			equip(AMateria *m) = 0;
		virtual void			unequip(int idx) = 0;
		virtual void			use(int idx, ICharacter &target) = 0;
};
#endif
