#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	try
	{
		std::vector<int>	i_vector;
		std::list<int>		i_list;
		int	var;

		for (int i = 0; i < 5; i++)
			i_vector.push_back(i);
		var = 2;
		easyfind(i_vector, var);
		var = 4;
		easyfind(i_vector, var);
		// var = 6;
		// easyfind(i_vector, var);

		for (int i = 0; i < 5; i++)
			i_list.push_back(i);
		var = 2;
		easyfind(i_list, var);
		var = 4;
		easyfind(i_list, var);
		var = 6;
		easyfind(i_list, var);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);	
}
