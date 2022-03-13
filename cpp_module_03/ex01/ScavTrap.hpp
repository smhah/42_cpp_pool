/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:15:25 by macbook           #+#    #+#             */
/*   Updated: 2021/12/20 19:00:05 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

        ScavTrap(std::string name);
        ScavTrap(void);
        ~ScavTrap(void);

        ScavTrap(ScavTrap const & src );
        ScavTrap &  operator=( ScavTrap const & rhs );

        void guardGate(void);
};