#include <iostream>

int main(int argc, char **argv)
{
	int	i;
	int j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				std::cout << (char)toupper((int)argv[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << "\n";
	}
	return 0;
}