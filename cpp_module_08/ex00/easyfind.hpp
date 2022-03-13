/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 08:15:22 by smhah             #+#    #+#             */
/*   Updated: 2022/02/12 13:10:08 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <iostream>

template<typename T>
void    easyfind(T & toSearch, int toFind)
{
    typename T::iterator it;
    it = find(toSearch.begin(), toSearch.end(), toFind);
    if(*it != toFind)
        throw(std::string("Element not found\n"));
    std::cout << "Element found\n" << std::endl;
}