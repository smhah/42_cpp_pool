/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 01:28:40 by smhah             #+#    #+#             */
/*   Updated: 2022/02/08 05:34:02 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        Base() {}
        virtual ~Base() {}
};

class A : public Base
{
    public:
        A(){};
        virtual ~A() {}
};

class B : public Base
{
    public:
        B(){};
        virtual ~B() {}
};

class C : public Base
{
    public:
        C(){};
        virtual ~C(){}
};

Base * generate(void);
void identify(Base* p);
void identify(Base & p);
