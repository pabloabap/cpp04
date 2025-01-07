/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabad-ap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:21:02 by pabad-ap          #+#    #+#             */
/*   Updated: 2025/01/07 19:28:33 by pabad-ap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# include <string>

class Brain
{
	public:
		Brain( void );
		Brain( Brain const &src);
		~Brain( void );

		Brain	&operator=( Brain const &src);

		const std::string	&getIdea(int const &i)const;
		const std::string	*getAllIdeas( void )const;
		void			setIdea(std::string const &new_idea, \
						int const &idea_num);
		void			setAllIdeas(std::string const (&newIdea)[100]);
	protected:	
		std::string	_ideas[100];
};

#endif
