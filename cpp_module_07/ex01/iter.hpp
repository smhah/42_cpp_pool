/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 00:43:31 by macbook           #+#    #+#             */
/*   Updated: 2022/01/23 01:17:03 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>

template <typename T>

void    iter(T * array, int size, void fct(T const &))
{
    for(int i = 0;i < size;i++)
    {
        fct(array[i]);
    }
}

template <typename T>
void printArray(const T & elmnt)
{
    std::cout << elmnt << std::endl;
}