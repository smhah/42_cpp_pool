/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:06:07 by macbook           #+#    #+#             */
/*   Updated: 2021/12/20 19:07:46 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap{

    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;                                                                                                                                                                                                                                                                                            
        
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(ClapTrap const & src );
        ClapTrap &  operator=( ClapTrap const & rhs );
    
        void        attack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);

        std::string get_name(void);
        int         get_hit_points(void);
        int         get_energy_points(void);
        int         get_attack_damage(void);

        void        set_name(std::string name);
        void        set_hit_points(int hitPoints);
        void        set_energy_points(int energyPoints);
        void        set_attack_damage(int attackDamage);
};