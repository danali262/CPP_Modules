#include <iostream>
#include <fstream>
#include <sstream>
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

static void	do_replace(std::string filename, std::string s1, std::string s2)
{
	std::string filename_replace;
	std::string filename_capital;
	std::ifstream inf (filename.c_str());
	
	if(!inf)
	{
		std::cerr << "Filename could not be opened for reading!" << std::endl;
		return ;
	}
	filename_capital = make_filename_capital(filename);
	filename_replace = filename_capital + ".replace";

	std::ofstream outf (filename_replace.c_str());

	if (!outf)
	{
		std::cerr << "Replace file could not be opened for writing!" << std::endl;
		return ;
	}

	std::ostringstream	text;
	std::string	str;
	size_t	find_pos;

	text << inf.rdbuf();
	str = text.str();
	while (1)
	{
		find_pos = str.find(s1);
		if (find_pos == std::string::npos)
			break;
		str.erase(find_pos, s1.length());
		str.insert(find_pos, s2);
	}
	inf.close();
	outf << str;
}

int	main(int argc, char **argv)
{
	std::string	filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cerr << "Please provide the correct number of arguments." << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
		std::cerr << "Please provided non-empty string." << std::endl;
	do_replace(filename, s1, s2);
	return (0);
}
