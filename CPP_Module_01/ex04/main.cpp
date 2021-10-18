#include <iostream>
#include <fstream>
#include <string>

static std::string	make_filename_capital(std::string filename)
{
	int i;

	i = 0;
	while (filename[i] != '\0')
	{
		filename[i] = toupper(filename[i]);
		i++;
	}
	return (filename);
}

static std::string	find_and_replace(std::string str_replace, std::string s1, std::string s2)
{
	int		i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (str_replace[i] != '\0')
	{
		j = 0;
		while (str_replace[i] == s1[j])
		{
			i++;
			j++;
		}
		if (j == s1.length() - 1)
		{
			while (k == s2.length() - 1)
			{
				str_replace[i - s1.length() - 1] = s2[k];
				k++;
				i--;
			}
		}
		i++;
	}
	return(str_replace);
}

static void	do_replace(std::string filename, std::string s1, std::string s2)
{
	std::string filename_replace;
	std::string filename_capital;
	std::ifstream inf(filename);
	
	if(!inf)
	{
		std::cerr << "Filename could not be opened for reading!" << std::endl;
		return ;
	}
	filename_capital = make_filename_capital(filename);
	filename_replace = filename_capital + ".replace";

	std::ofstream outf(filename_replace);
	if (!outf)
	{
		std::cerr << "Replace file could not be opened for writing!" << std::endl;
		return ;
	}
	std::string str_replace;
	// while(std::getline(inf, str_replace, ' '))
	while(std::getline(inf, str_replace))
	{
		std::cout << "String replace is " << str_replace << std::endl;
		str_replace = find_and_replace(str_replace, s1, s2);
		outf << str_replace;
	}
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
		std::cerr << "Please provide sufficient arguments." << std::endl;
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
		std::cerr << "Please provided non-empty string." << std::endl;
	do_replace(filename, s1, s2);
	return (0);
}
