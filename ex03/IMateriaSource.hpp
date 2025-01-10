// CABECERA!!

#ifndef IMATERIASOURCE_CLASS_HPP
# define IMATERIASOURCE_CLASS_HPP

# include <string>
# include "AMateria.hpp"

class AMateria;

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {};
		virtual	void learnMateria( AMateria * ) = 0;
		virtual AMateria	*createMateria( std::string const &type ) = 0;
};

#endif
