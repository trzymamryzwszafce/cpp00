#include <iostream>
#include <string>
#include <cctype>

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
		for (size_t j = 0; j < s.size(); j++)
			s[j] = static_cast<char>(std::toupper(static_cast<unsigned char>(s[j])));
		std::cout << s;
		if (i + 1 < argc)
			std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
