#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm",target, 25, 5)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & i )
{
	//o << "Value = " << i.getValue();
	o << "name : " << i.getName() << std::endl;
	o << "grade for sign : " << i.getGradeSign() << std::endl;
	o << "grade for execute : " << i.getGradeExecute() << std::endl;
	o << "signed : " << i.checkIfSigned() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

	if(executor.getGrade() > this->getGradeExecute())
		throw(Form::GradeTooLowException());
	else if (this->checkIfSigned() == false)
		throw(Form::formIsNotSigned());
	else
		std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */