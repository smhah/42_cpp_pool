/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:16:38 by smhah             #+#    #+#             */
/*   Updated: 2022/02/09 06:30:19 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main()
{
    uintptr_t raw;
    Data *pOne = new Data();
    
    pOne->a = 1;
    pOne->b = 2;
    pOne->str = "test";

    std::cout << "Data ptr before cast: " << pOne << std::endl;
    std::cout <<"content before cast: " << pOne->a << " " << pOne->b << " " << pOne->str << std::endl;
    raw = serialize(pOne);
    pOne = deserialize(raw);
    std::cout << "Data ptr after cast: " << pOne << std::endl;
    std::cout << "content after cast : " << pOne->a << " " << pOne->b << " " << pOne->str << std::endl;
}