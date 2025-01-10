/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:10:13 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 17:33:06 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateriahpp"

class Character: public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		int		_storageCapacity;
	public:
		Character( void );
		Character( std::string const name );
		Character( Character const &src);
		~Character( void );

		Character		&operator=(Character const &src);

		std::string const	&getName( void ) const;
		void			equip(AMateria *m);
		void			unequip(int idx);
		void			use(int idx, ICharacter &target);
}

#endif
