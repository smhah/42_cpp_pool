/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:01:35 by smhah             #+#    #+#             */
/*   Updated: 2021/12/06 18:35:00 by smhah            ###   ########.fr       */
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
		~Zombie();

};
Zombie* newZombie(std::string name);
void randomChump(std::string name);