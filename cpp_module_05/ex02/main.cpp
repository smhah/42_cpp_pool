/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:59:42 by smhah             #+#    #+#             */
/*   Updated: 2022/02/07 03:45:32 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{

	//Form 	form1("form1", 12, 3);
	// Bureaucrat br1("br1", 1);
	// PresidentialPardonForm form1("target1");
	// try
	// {
	// 	form1.BeSigned(br1);
	// 	//form1.execute(br1);
	// 	br1.executeForm(form1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// Bureaucrat br2("br2", 1);
	// RobotomyRequestForm form2("target2");

	// try
	// {
	// 	form2.BeSigned(br2);
	// 	form2.execute(br2);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	Bureaucrat br3("br3", 146);
	ShrubberyCreationForm form3("target3");

	try
	{
		form3.BeSigned(br3);
		//form3.execute(br3);
		br3.executeForm(form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	};

}