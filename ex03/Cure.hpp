/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 19:15:43 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 19:15:57 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include "AMateria.hpp"

class	Cure: public AMateria
{
	Cure( void );
	Cure( Cure const &src );
	~Cure( void );
	
	Cure	&operator=( Cure const &src );
	
	Cure	*clone() const;
	void	use( ICharacter &target );
};

#endif
