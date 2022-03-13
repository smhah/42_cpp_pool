#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T>
{

	public:

		MutantStack(){};
		MutantStack( MutantStack const & src ){*this = src;};
		~MutantStack(){};
		MutantStack &		operator=( MutantStack const & rhs ){this->c = rhs.c;};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator 	begin(){return (this->c.begin());}
		iterator 	end(){return (this->c.end());}
};

//std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i );

#endif /* ***************************************************** MUTANTSTACK_H */