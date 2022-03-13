/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 12:26:34 by macbook           #+#    #+#             */
/*   Updated: 2021/12/20 19:04:07 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) 
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const & src )
{
    this->operator= (src);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    if(this != &rhs)
    {
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

std::string ClapTrap::get_name(void)
{
    return(this->_name);
}

int ClapTrap::get_hit_points(void)
{
    return(this->_hitPoints);
}

int ClapTrap::get_energy_points(void)
{
    return(this->_energyPoints);
}

int ClapTrap::get_attack_damage(void)
{
    return(this->_attackDamage);
}

void    ClapTrap::set_name(std::string name)
{
    this->_name = name;
}

void     ClapTrap::set_hit_points(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void    ClapTrap::set_energy_points(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

void    ClapTrap::set_attack_damage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << this->_name << " attack " << target << " causing " << get_attack_damage() << " points of damage" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->_name << " takes " << amount << " amount of damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned  int amount)
{
    std::cout << this->_name << " recovers " << amount << " hit points" << std::endl;
}