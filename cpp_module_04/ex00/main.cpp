/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:21:02 by smhah             #+#    #+#             */
/*   Updated: 2022/02/05 04:04:55 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongCat.hpp"
# include "WrongAnimal.hpp"

int main()
{
    // const Animal *kliyeb = new Dog();
    // const Animal *mchicha = new Cat();
    // const Animal *meta = new Animal();
    // const WrongAnimal *wrong_cat = new WrongCat();
    const WrongCat *wrong_cat_only = new WrongCat();

    // std::cout << "type = " <<kliyeb->getType() << std::endl;
    // kliyeb->makeSound();
    // std::cout << "type = "<<mchicha->getType() << std::endl;
    // mchicha->makeSound();
    
    // meta->makeSound();

    // std::cout << wrong_cat->getType() << std::endl;
    // wrong_cat->makeSound();

    std::cout << wrong_cat_only->getType() << std::endl;
    wrong_cat_only->makeSound();

    // delete kliyeb;
    // delete meta;
    // delete mchicha;
    // delete wrong_cat;
    delete wrong_cat_only;
}