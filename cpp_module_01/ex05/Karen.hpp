/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:45:40 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 14:45:24 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Karen{

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void (Karen::*fun_ptr[4])(void);
	
	public:
		void complain(std::string level);
		Karen(void);
		~Karen(void);  
};