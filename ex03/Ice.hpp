/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:58:05 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/08 19:05:53 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include "AMateria.hpp"

class	Ice: public AMateria
{
	Ice( void );
	Ice( Ice const &src );
	~Ice( void );
	
	Ice	&operator=( Ice const &src );
	
	Ice	*clone() const;
	void	use( ICharacter &target );
};

#endif
