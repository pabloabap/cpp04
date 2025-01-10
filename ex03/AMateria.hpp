/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:36:06 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 18:52:40 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIAL_CLASS_HPP
# define AMATERIAL_CLASS_HPP

# include <string>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria( void );
		AMateria( AMateria const &src );
		virtual ~AMateria( void );
		
		AMateria	&operator=( AMateria const &src );

		std::string	const &getType() const;
		
		virtual		AMateria* clone() const = 0;
		virtual void	use(ICharacter &target);
};

#endif
