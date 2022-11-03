#include <iostream>

/*
Napisz funkcjê która wczyta dwie liczby i wykona dzielenie na nich
*/
// DRY- dont repeat yourself - nie powtarzaj sie

/*
	Operatory porównania:
równoœæ                 ==
ró¿noœæ                   !=
wiêkszoœæ               >
mniejszoœæ              <
Wieksze lub rowne       >=
mniejsze lub rowne      <=
	Operatory logiczne:
			And         Or          Not
A   B       A&&B        A||B        !A
F   F        F           F          T
F   T        F           T          T
T   F        F           T          F
T   T        T           T          F



*/


void task1()
{//                                suma  ró¿nica   iloczyn   iloraz   reszta       
	int firstNumber, secondNumber, quotient;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe:\n";
	std::cin >> secondNumber;


	if (secondNumber != 0)
		quotient = firstNumber / secondNumber;

	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";

	if (secondNumber == 0)
		std::cout << "dzielienie przez zero!!!\n";

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "iloraz:" << quotient << "\n";

	}
	else
	{
		std::cout << "dzielenie przez 0" << "\n";
	}
	std::cout << "Koniec\n";

}

void task2() // Napisz funkcje  ktora wczyta liczbe i sprawdzi czy jest dodatnia czy nie
{
	int Numbertocheck;

	std::cout << "podaj liczbe do sprawdzenia: \n";
	std::cin >> Numbertocheck;

	if (Numbertocheck > 0)
		std::cout << " Liczba wieksza od zera";
	else
		std::cout << " Liczba rowna lub mniejsza od zera";


}

void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia: \n";
	std::cin >> numberToCheck;

	std::cout << "Liczba jest w zakresie\n";
	std::cout << "Liczba nie jest w zakresie\n";

	if (numberToCheck >= 10)
		if (numberToCheck <= 25)
			std::cout << "Liczba jest w zakresie\n";
		else
			std::cout << "Liczba nie jest w zakresie\n";
	else
		std::cout << "Liczba nie jest w zakresie\n";






}





int main()
{
	//task1();
	task2();
	task3();
}

