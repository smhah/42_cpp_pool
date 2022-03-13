#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

void    printChar(char c)
{
	if(c == 0 || !isprint(c))
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << c << "'" << std::endl;
}

void    printInt(int nb)
{
	std::cout << "int : " << nb << std::endl;
}

void	printFloat(float nb)
{
	if(nb - int(nb) == 0)
		std::cout << "float : " << nb << ".0f" << std::endl;
	else
		std::cout << "float : " << nb << "f" << std::endl;
}

void	printDouble(double nb)
{
	if(nb - (int)nb == 0)
		std::cout << "double : " << nb << ".0" << std::endl;
	else
		std::cout << "double : " << nb << std::endl;
}

int main(int ac, char **av)
{
	int intScalar;
	char charScalar;
	float floatScalar;
	double doubleScalar;
	std::string s;

	if(ac != 2)
	{
		std::cerr << "too many arguements" << std::endl;
	}
	if((strlen(av[1]) == 1) && ((av[1][0] < 48 && av[1][0] >= 32) || (av[1][0] > 57 && av[1][0] < 127)))
	{
		charScalar = av[1][0];
		printChar(charScalar);
		printInt(static_cast<int>(charScalar));
		printFloat(static_cast<float>(charScalar));
		printDouble(static_cast<double>(charScalar));
		return (0);
	}
	s = av[1];
	if(s.find_last_of("f") && s.compare("+inf") && s.compare("-inf") && s.compare("nan"))
	{
		if(!s.compare("+inff") || !s.compare("-inff") || !s.compare("nanf"))
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : " << s << std::endl;
			std::cout << "double : " << s.substr(0,s.size() - 1) << std::endl;
			return (0);
		}
		try
		{
			floatScalar = std::stof(s);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Can't convert: beyond limits of type" << std::endl;
			return 0;
		}
		if(floatScalar < 0 || floatScalar > 127)
			std::cout << "char : impossible" << std::endl;
		else
			printChar(static_cast<char>(floatScalar));
		if(floatScalar > static_cast<float>(INT32_MAX) || floatScalar < static_cast<float>(INT32_MIN))
			std::cout << "int : impossible";
		else
			printInt(static_cast<int>(floatScalar));
		printFloat(floatScalar);
		printDouble(static_cast<double>(floatScalar));
	}
	else if(s.find_last_of(".") != std::string::npos || !s.compare("+inf") || !s.compare("-inf") || !s.compare("nan"))
	{
		if(!s.compare("+inf") || !s.compare("-inf") || !s.compare("nan"))
		{
			std::cout << "char : impossible" << std::endl;
			std::cout << "int : impossible" << std::endl;
			std::cout << "float : " << s << "f" << std::endl;
			std::cout << "double : " << s << std::endl;
			return (0);
		}
		try
		{
			doubleScalar =std::stod(s);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Can't convert: beyond limits of type" << std::endl;
			return 0;
		}
		if(doubleScalar < 0 || doubleScalar > 127)
			std::cout << "char : impossible" << std::endl;
		else
			printChar(static_cast<char>(doubleScalar));
		if(doubleScalar > static_cast<double>(INT32_MAX) || doubleScalar < static_cast<double>(INT32_MIN))
			std::cout << "int : impossible";
		else
			printInt(static_cast<int>(doubleScalar));
		if(doubleScalar > static_cast<double>(__FLT_MAX__)|| doubleScalar <static_cast<double>(__FLT_MIN__))
			std::cout << "float : impossible";
		else
			printFloat(static_cast<float>(doubleScalar));
		printDouble(doubleScalar);
	}
	else
	{
		try
		{
			intScalar = std::stoi(s);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Can't convert: beyond limits of type" << std::endl;
			return 0;
		}
		if(intScalar < 0 || intScalar > 127)
			std::cout << "char : impossible" << std::endl;
		else
			printChar(static_cast<char>(intScalar));
		printInt(intScalar);
		printFloat(static_cast<float>(intScalar));
		printDouble(static_cast<double>(intScalar));
	}
	return (0);
}