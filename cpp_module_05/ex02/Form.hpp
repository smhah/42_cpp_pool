#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form(std::string const name,std::string target, int const gradeSign, int const gradeExecute);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException() throw();
			virtual ~GradeTooHighException() throw();
			virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException() throw();
			virtual ~GradeTooLowException() throw();
			virtual const char *what() const throw();
	};

	virtual void execute(Bureaucrat const & executor) const = 0;

	class formIsNotSigned : public std::exception
	{
		public:
			formIsNotSigned() throw();
			virtual ~formIsNotSigned() throw();
			virtual const char *what() const throw();
	};
	  
	Form & BeSigned(Bureaucrat & br);

	void		setSign(void);
	std::string getName(void) const;
	std::string getTarget(void) const;
	bool		checkIfSigned(void) const;
	int			getGradeSign(void) const;
	int			getGradeExecute(void) const;

	private:
		std::string const _name;
		std::string const _target;
		bool		_isSigned;
		int			const _gradeSign;
		int			const _gradeExectute;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */