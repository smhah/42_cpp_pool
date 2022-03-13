/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smhah <smhah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 09:17:02 by smhah             #+#    #+#             */
/*   Updated: 2022/02/11 11:06:06 by smhah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <stdlib.h>
# include <time.h>

class Span
{

	public:

		Span();
		Span(unsigned int n);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		class listIsFull : public std::exception
		{
			public:
				listIsFull() throw(){}
				virtual ~listIsFull() throw(){}
				virtual const char * what() const throw(){return("list is full");}
		};
		
		class SpanNotEnough : public std::exception
		{
			public:
				SpanNotEnough() throw(){}
				virtual ~SpanNotEnough() throw(){}
				virtual const char * what() const throw(){return("Span Not Enough, add more span");}
		};
		
		void	addNumber(int number);
		void	addRandomNumbers(int size);
		void	shortestSpan();
		void	longestSpan();

	private:
		std::vector<int> _myList;
		unsigned int _maxSize;

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */