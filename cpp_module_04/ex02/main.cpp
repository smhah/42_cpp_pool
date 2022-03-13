/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:21:02 by smhah             #+#    #+#             */
/*   Updated: 2022/01/05 12:40:59 by smhah            ###   ########.fr       */
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
    //Animal test;

    for(int i = 0; i < n / 2; i++)
    {
        animals[i] = new Dog();
    }
    for(int i = 5; i < n; i++)
    {
        animals[i] = new Cat();
    }    
    for(int i = 0; i < n; i++)
    {
        delete(animals[i]);
    }
}