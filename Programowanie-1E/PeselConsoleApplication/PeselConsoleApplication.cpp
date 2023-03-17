

#include <iostream>
std::string getPesel()
{
	std::string stringPesel;
	std::cout << "Podaj numer pesel:\n";
	std::cin >> stringPesel;
	return stringPesel;
}

bool 




int main()
{
	std::string stringPesel = getPesel();

	if (checkPesel(stringPesel) == true);
	{

	}
	else
	{
		std::cout << "Podany numer pesel jest niepoprawny\n";
	}
}

