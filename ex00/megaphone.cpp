#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		std::string s = argv[i];
		for (int j = 0; s[j]; j++)
			s[j] = std::toupper(s[j]);
		std::cout << s;
		if (i + 1 < argc)
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
