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

/*Napisz funkcje która wczyta liczbê i wyœwietli informacjê czy jest parzysta czy nie*/
void task4()
{

	int NumberToCheck, CheckNumber;

	std::cout << "Podaj liczbe do sprawdzenia\n";
	std::cin >> NumberToCheck;

	CheckNumber = NumberToCheck % 2;

	if (CheckNumber > 0)
	{
		std::cout << "Liczba nie jest parzysta";
	}


}




/*Napis funkcje która wczyta liczbê która bêdzie bokiem kwadratu i wyœwietli informacje o polu i obwodzie*/

void task5()
{
	int sideNumber, area, circuit;
	std::cout << "Podaj bok kwadruatu:\n";
	std::cin >> sideNumber;
	if (sideNumber > 0)
	{
		area = sideNumber * sideNumber;
		std::cout << "Pole:" << area << "\n";
		circuit = sideNumber * 4;
		std::cout << "Obwod:" << circuit << "\n";
	}
	else
	{
		std::cout << "Bok nie moze byc liczba ujemna\n";
	}


}
/*Napisz funkcje, ktora wczyta dwie liczby i wyœwietli je w kolejnoœci rosnacej*/
void task8()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;
	if (firstNumber < secondNumber)
		std::cout << firstNumber << "," << secondNumber;
	else
		std::cout << secondNumber << "," << firstNumber;
}

void task12()
{
	int temperature;
	std::cout << "Podaj temperaturê\n";
	std::cin >> temperature;

	if (temperature > 30)
		std::cout << "Gor¹co\n";
	if (temperature < 31 && temperature > 15)
		std::cout << "Ciep³o\n";
	if (temperature < 16 && temperature > 0)
		std::cout << "zimno\n";
		if (temperature < 1)
		std::cout << "Bardzo zimno\n";
}

/*Zadanie 6
Napisz funkcjê, która wczyta dwie liczby i wyœwietli wiêksz¹ z nich.
Zadanie 7
Napisz funkcjê która wczyta trzy liczby i wyœwietli najwiêksz¹ z nich.
Zadanie 8
Napisz funkcjê, która wczyta dwie liczby i wyœwietli je w kolejnoœci rosn¹cej.
Zadanie 9
Napisz funkcjê, która wczyta trzy liczby i wyœwietli je w kolejnoœci rosn¹cej.
Zadanie 10
Napisz funkcjê, która wczyta numer dnia tygodnia i wyœwietli nazwê tego dnia.
Zadanie 11*
Napisz funkcjê, która wczyta wspó³czynniki równania kwadratowego i wyœwietli pierwiastki tego równania*/

/*void task10()
{
	int dayNumber;
	std::cout << "Podaj liczbe\n";
	std::cin >> dayNumber;


	switch (dayNumber)
	{
	case 1:
		std::cout << "Poniedzialek\n";
		break;
	case 2:
		std::cout << "wtorek\n";
		break;
	case 3:
		std::cout << "sroda\n";
		break;
	case 4:
		std::cout << "czwartek\n";
		break;
	case 5:
		std::cout << "piatek\n";
		break;
	case 6:
		std::cout << "sobota\n";
		break;
	case 0:
	case 7:
		std::cout << "niedziela\n";
		break;
	default:
		std::cout << "bledny dzien\n";


	}


	int 12


}
*/
int main()
{
	setlocale(LC_CTYPE, "polish");
	//void task1();
	//void task2();
	//void task3();
	//void task4();
	//void task5();
	//void task8();
	//void task10();
	void task12();

}

