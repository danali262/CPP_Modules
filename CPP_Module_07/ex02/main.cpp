#include <iostream>
#include "Array.hpp"

int main(void)
{
	try
	{
		// {
    	// 	Array<int>   	A;

		// 	std::cout << "Trying to reach element 0 of empty array . . ." << std::endl;
		// 	std::cout << A[0] << std::endl;
		// }

		{
    		Array<int>		B(5);
			unsigned int	i;

			for (i = 0; i < B.size(); i++)
				B[i] = i;
			std::cout << "Array B:" << std::endl;
			for (i = 0; i < B.size(); i++)
				std::cout << B[i] << std::endl;

			Array<int>		C(B);
			Array<int>		D;

			std::cout << "Array C:" << std::endl;
			for (i = 0; i < C.size(); i++)
				std::cout << C[i] << std::endl;

			D = C;
			std::cout << "Array D:" << std::endl;
			for (i = 0; i < D.size(); i++)
				std::cout << D[i] << std::endl;
		}

		// {
		// 	Array<int>	E(6);

		// 	// std::cout << "Trying to reach element -1 of array . . ." << std::endl;
		// 	// std::cout << E[-1] << std::endl;
		// 	std::cout << "Trying to reach element 8 of array . . ." << std::endl;
		// 	std::cout << E[8] << std::endl;
		// }
	}

	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return (0);
}
