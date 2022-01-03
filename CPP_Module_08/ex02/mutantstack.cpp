#include "mutantstack.hpp"

template <typename T>

MutantStack<T>::MutantStack(void) : MutantStack<T>::stack() {}

template <typename T>

MutantStack<T>::MutantStack(MutantStack<T> const &m) : MutantStack<T>::stack(m) {}

template <typename T>

MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &m)
{
	if (this != m)
	{
		MutantStack<T>::stack::operator=(m);
	}
	return (*this);
}

template <typename T>

typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>

typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>

typename MutantStack<T>::const_iterator	MutantStack<T>::cbegin() const
{
	return (this->c.cbegin());
}

template <typename T>

typename MutantStack<T>::const_iterator	MutantStack<T>::cend() const
{
	return (this->c.cend());
}

template <typename T>

typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>

typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <typename T>

typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crbegin() const
{
	return (this->c.crbegin());
}

template <typename T>

typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::crend() const
{
	return (this->c.crend());
}

template <typename T>

MutantStack<T>::~MutantStack(void) {}
