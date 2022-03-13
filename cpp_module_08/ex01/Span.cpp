/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:17:00 by smhah             #+#    #+#             */
/*   Updated: 2022/02/11 11:18:40 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span(unsigned int n) : _maxSize(n)
{

}

Span::Span( const Span & src )
{
	this->operator=(src);
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	this->_maxSize = rhs._maxSize;
	this->_myList = rhs._myList;
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, Span const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Span::addNumber(int number)
{
	if(this->_myList.size() == this->_maxSize)
		throw(Span::listIsFull());
	else
		this->_myList.push_back(number);
}

void	Span::addRandomNumbers(int size)
{
	srand(time(NULL));
	for(int i = 0;i < size;i++)
	{
		if((int)this->_myList.size() > (int)this->_maxSize)
			throw(Span::listIsFull());
		else
			addNumber(rand() % 100);
	}
}

void	Span::shortestSpan(void)
{
	int min = 2147483647;
	int newMin;
	//int newMax;

	if((int)_myList.size() <= 1)
		throw(Span::SpanNotEnough());
	for(int i = 0; i < (int)_myList.size();i++)
	{
		for(int j = i + 1; j < (int)_myList.size(); j++)
		{
			newMin = _myList[i] - _myList[j];
			if(newMin < 0)
				newMin = newMin * (-1);
			if(newMin < min)
				min = newMin;
		}
	}
	std::cout << "Shortest Span is " << min << std::endl;
}

void	Span::longestSpan(void)
{
	if((int)_myList.size() <= 1)
		throw(Span::SpanNotEnough());
	int maxx = *std::max_element(_myList.begin(), _myList.end());
	int minn = *std::min_element(_myList.begin(), _myList.end());
	std::cout << "Longest Span is " << maxx - minn << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */