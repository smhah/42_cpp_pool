/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 06:54:50 by smhah             #+#    #+#             */
/*   Updated: 2022/02/12 13:23:38 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vc;
    
    for(int i = 0;i < 3;i++)
    {
        vc.push_back(1);
    }
    vc.push_back(2);
    try
    {
        easyfind(vc, 3);
    }
    catch(const std::string e)
    {
        std::cerr << e << '\n';
    }
}