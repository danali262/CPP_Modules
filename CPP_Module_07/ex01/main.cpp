#include "iter.hpp"
#include "Awesome.hpp"
#include <cctype>

int	main()
{
		int	tab[] = { 0, 1, 2, 3, 4 };
		Awesome	tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);

	return (0);
}
