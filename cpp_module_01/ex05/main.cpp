/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 13:57:56 by smhah             #+#    #+#             */
/*   Updated: 2021/12/15 13:17:06 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen p;
    // test complain
    p.complain("debug");
    p.complain("info");
    p.complain("warning");
    p.complain("error");
}