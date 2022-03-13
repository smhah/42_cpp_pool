/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:59:45 by smhah             #+#    #+#             */
/*   Updated: 2021/12/22 16:05:27 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		std::string getName(void) const;
		int			getGrade(void) const;
		void		setGrade(int grade);

		void		incrGrade(void);
		void		dcrGrade(void);
		//void		GradeTooHighException(void) const;
		//void		GradeTooLowException(void) const;
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
	private:
		std::string const _name;
		int _grade;
};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */