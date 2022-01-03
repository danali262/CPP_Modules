#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack<T> const &m);
		MutantStack<T>	&operator=(MutantStack<T> const &m);

		typedef typename MutantStack<T>::stack::container_type::iterator				iterator;
		iterator begin();
		iterator end();

		typedef typename MutantStack<T>::stack::container_type::const_iterator			const_iterator;
		const_iterator cbegin() const;
		const_iterator cend() const;

		typedef typename MutantStack<T>::stack::container_type::reverse_iterator		reverse_iterator;
		reverse_iterator rbegin();
		reverse_iterator rend();

		typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator	const_reverse_iterator;
		const_reverse_iterator crbegin() const;
		const_reverse_iterator crend() const;

		~MutantStack(void);
};

#endif
