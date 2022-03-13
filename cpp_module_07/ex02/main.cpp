/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 00:55:37 by smhah             #+#    #+#             */
/*   Updated: 2022/02/11 07:02:06 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//template <typename T>
int main()
{
    int size;

    size = 10;
    Array<int> arrayOne(10);
    Array<int> arrayTwo;
    Array<int> arrayThree(arrayTwo);
    
    //std::cout << "size is " << arrayOne.size() << std::endl;
    std::cout << "arrayOne(filled array):" << std::endl;
    for(unsigned int i = 0; i < arrayOne.size(); i++)
    {
        arrayOne[i] = 3;
    }
    try
    {
        arrayOne[3] = 2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Array<int>arrayFour = arrayOne;

    for(unsigned int i = 0; i < arrayOne.size();i++)
    {
        std::cout << arrayOne[i] << std::endl;
    }
    std::cout << "arrayTwo(empty array):" << std::endl;
    for(unsigned int i = 0; i < arrayTwo.size();i++)
    {
        std::cout << arrayTwo[i] << std::endl;
    }
     std::cout << "arrayThree(copy of arrayTwo):" << std::endl;
    for(unsigned int i = 0; i < arrayThree.size();i++)
    {
        std::cout << arrayThree[i] << std::endl;
    }
    std::cout << "arrayFour=arrayOne:" << std::endl;
    for(unsigned int i = 0; i < arrayFour.size();i++)
    {
        std::cout << arrayFour[i] << std::endl;
    }
    //std::cout << "array's lenght: " << arrayOne.size() << std::endl;
}