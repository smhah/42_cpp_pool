/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:03:59 by smhah             #+#    #+#             */
/*   Updated: 2022/02/12 13:21:07 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "top element is: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout <<"size of the stack is: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    //std::cout << "it is: " << *it << std::endl;
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}
// int main()
// {
//     MutantStack<float> mstack;
    
//     mstack.push(1.5f);
//     mstack.push(2.5f);
//     std::cout << "top element is: " << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout <<"size of the stack is: " << mstack.size() << std::endl;
//     mstack.push(1.3f);
//     mstack.push(2.9f);
//     MutantStack<float>::iterator it = mstack.begin();
//     MutantStack<float>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
// }