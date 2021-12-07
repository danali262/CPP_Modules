#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void	iter(T *add, size_t len, void (*f)(T const & ))
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		f(add[i]);
		i++;
	}
}

#endif
