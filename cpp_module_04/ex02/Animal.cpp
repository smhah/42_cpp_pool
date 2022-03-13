#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal & src )
{
	this->operator= (src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "type is " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Animal::makeSound(void) const
{
	std::cout << "animal's sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string		Animal::getType(void) const
{
	return (this->_type);
}

void			Animal::setType(std::string type)
{
	this->_type = type;
}
/* ************************************************************************** */