/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 18:43:38 by smhah             #+#    #+#             */
/*   Updated: 2021/12/06 22:08:14 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
	
	private:

		std::string name;

	public:
		void    announce(void);
		Zombie();
		Zombie(std::string name);
		std::string get_name(void);
		void set_name(std::string str);
		~Zombie();

};

Zombie* zombieHorde( int N, std::string name );