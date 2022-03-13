/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 17:59:42 by smhah             #+#    #+#             */
/*   Updated: 2022/02/06 08:12:21 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Form 	form1("form1", 12, 3);
	Bureaucrat br1("br1", 13);

	// form1.BeSigned(br1);
	try
	{
		//form1.BeSigned(br1);
		br1.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "check if signed: " << form1.checkIfSigned() << std::endl;

}