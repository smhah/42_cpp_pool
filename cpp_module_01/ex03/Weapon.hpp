/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:22:33 by macbook           #+#    #+#             */
/*   Updated: 2021/12/07 18:32:45 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon{
    
    private:
        std::string type;
    
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        const std::string& get_type(void);
        void    set_type(std::string type);
};