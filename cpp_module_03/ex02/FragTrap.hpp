/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:46:35 by macbook           #+#    #+#             */
/*   Updated: 2021/12/20 19:00:05 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    
    public:
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap();

        FragTrap(FragTrap const & src );
        FragTrap &  operator=( FragTrap const & rhs );

        void highFivesGuys(void);
};