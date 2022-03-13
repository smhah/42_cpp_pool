/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:26:23 by smhah             #+#    #+#             */
/*   Updated: 2022/02/04 01:29:19 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <string.h>

struct Data{
   int a;
   int b;
   std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);