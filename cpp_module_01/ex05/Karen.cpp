/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:49:59 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 13:17:30 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void debug(void);
void info(void);
void warning(void);
void error(void);

Karen::Karen(void)
{
    std::cout << "constructor called" << std::endl;
}

Karen::~Karen(void)
{
    std::cout << "destructor called" << std::endl;
}

void    Karen::debug(void)
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    //void    (Karen::* p_f[4])(void);
    this->fun_ptr[0] = &Karen::debug;
    this->fun_ptr[1] = &Karen::info;
    this->fun_ptr[2] = &Karen::warning;
    this->fun_ptr[3] = &Karen::error;


    std::string names[4] = {"debug", "info", "warning", "error"};
    for(int i=0; i < 4; i++)
    {
        if(level == names[i])
        {
            //(this->actions[i])();
            (this->*fun_ptr[i])();
        }
    }
}
