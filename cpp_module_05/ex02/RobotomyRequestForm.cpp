#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <ctime>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm",target, 72, 45)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "name : " << i.getName() << std::endl;
	o << "grade for sign : " << i.getGradeSign() << std::endl;
	o << "grade for execute : " << i.getGradeExecute() << std::endl;
	o << "signed : " << i.checkIfSigned() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int num;

	srand(time(0));
	num = rand();

	if(executor.getGrade() > this->getGradeExecute())
		throw(Form::GradeTooLowException());
	else if (this->checkIfSigned() == false)
		throw(Form::formIsNotSigned());
	else
	{
		if(num % 2 == 0)
			std::cout << getTarget() << "  has been robotomized successfully." << std::endl;
		else
			std::cout << getTarget() << "  has not been robotomized, failure." << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */