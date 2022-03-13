#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const name, int const gradeSign, int const gradeExecute) : _name(name) , _gradeSign(gradeSign), _gradeExectute(gradeExecute)
{
	this->_isSigned = false;
}

Form::Form( const Form & src ) : _gradeSign(src._gradeSign), _gradeExectute(src._gradeExectute)
{
	this->operator= (src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_isSigned = rhs._isSigned;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "name = " << i.getName() << std::endl;
	o << "grade for execute = " << i.getGradeExecute()  << std::endl;
	o << "grade for sign = " <<i.getGradeSign() <<std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void			Form::setSign(void)
{
	this->_isSigned = 1;
}

std::string		Form::getName(void) const
{
	return (_name);
}

bool			Form::checkIfSigned(void) const
{
	return (_isSigned);
}

int				Form::getGradeSign(void) const
{
	return (_gradeSign);
}

int				Form::getGradeExecute(void) const
{
	return (_gradeExectute);
}

Form			&Form::BeSigned(Bureaucrat & br)
{
	if(br.getGrade() > getGradeSign())
	{
		throw(GradeTooLowException());
	}
	else
	{
		br.signForm(*this);
		_isSigned = true;
	}
	return *this;
}
/*
** -------------------------------- EXCEPTIONS --------------------------------
*/
Form::GradeTooHighException::GradeTooHighException() throw (){}
Form::GradeTooLowException::GradeTooLowException() throw(){}
Form::GradeTooHighException::~GradeTooHighException() throw(){}
Form::GradeTooLowException::~GradeTooLowException() throw(){}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

/* ************************************************************************** */