/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:21:02 by smhah             #+#    #+#             */
/*   Updated: 2022/02/05 04:19:43 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "Brain.hpp"

int main()
{
    int n = 10;
    const Animal *animals[n];

    for(int i = 0; i < n / 2; i++)
    {
        animals[i] = new Dog();
    }
    for(int i = 5; i < n; i++)
    {
        animals[i] = new Cat();
    }
    
    // Dog basic;
    // Dog tmp;
    // tmp = basic;
    // Dog basic;
    // {
    //     Dog tmp = basic;
    // }
    for(int i = 0; i < n; i++)
    {
        delete(animals[i]);
    }
}