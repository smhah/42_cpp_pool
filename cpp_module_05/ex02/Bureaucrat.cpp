/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:59:47 by smhah             #+#    #+#             */
/*   Updated: 2022/02/07 03:49:02 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if(grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << "Bureaucrat constructor called" << std::endl; 
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	this->operator= (src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl; 
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << "name = " << i.getName() << "| grade = " << i.getGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Bureaucrat::getName(void) const
{
	return(this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

// void		Bureaucrat::GradeTooHighException(void) const
// {
// 	std::cout << "Grade Too High" << std::endl;
// }

// void		Bureaucrat::GradeTooLowException(void) const
// {
// 	std::cout << "Grade Too Low" << std::endl;
// }

void		Bureaucrat::incrGrade(void)
{

	if(_grade - 1 < 1)
	{
		throw(Bureaucrat::GradeTooHighException());
	}
	else
		_grade--;

}

void		Bureaucrat::dcrGrade(void)
{
	if(_grade + 1 > 150)
	{
		throw(Bureaucrat::GradeTooLowException());
	}
	else
		this->_grade++;
}

void		Bureaucrat::signForm(Form & form)
{
	if(this->getGrade() <= form.getGradeSign())
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
		form.setSign();
	}
	else
	{
		std::cout << this->getName() << " cannot signs " << form.getName() << " because grade too low" << std::endl; 
	}
}

void		Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
	//(void)form;
}
/*
** -------------------------------- EXCEPTIONS --------------------------------
*/
Bureaucrat::GradeTooHighException::GradeTooHighException() throw (){}
Bureaucrat::GradeTooLowException::GradeTooLowException() throw(){}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw(){}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

/* ************************************************************************** */