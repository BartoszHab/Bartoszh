#include <iostream>

/*
Napisz funkcj� kt�ra wczyta dwie liczby i wykona dzielenie na nich
*/
// DRY- dont repeat yourself - nie powtarzaj sie

/*
	Operatory por�wnania:
r�wno��                 ==
r�no��                   !=
wi�kszo��               >
mniejszo��              <
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
{//                                suma  r�nica   iloczyn   iloraz   reszta       
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

/*Napisz funkcje kt�ra wczyta liczb� i wy�wietli informacj� czy jest parzysta czy nie*/
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




/*Napis funkcje kt�ra wczyta liczb� kt�ra b�dzie bokiem kwadratu i wy�wietli informacje o polu i obwodzie*/

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
/*Napisz funkcje, ktora wczyta dwie liczby i wy�wietli je w kolejno�ci rosnacej*/
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
	std::cout << "Podaj temperatur�\n";
	std::cin >> temperature;

	if (temperature > 30)
		std::cout << "Gor�co\n";
	if (temperature < 31 && temperature > 15)
		std::cout << "Ciep�o\n";
	if (temperature < 16 && temperature > 0)
		std::cout << "zimno\n";
		if (temperature < 1)
		std::cout << "Bardzo zimno\n";
}

/*Zadanie 6
Napisz funkcj�, kt�ra wczyta dwie liczby i wy�wietli wi�ksz� z nich.
Zadanie 7
Napisz funkcj� kt�ra wczyta trzy liczby i wy�wietli najwi�ksz� z nich.
Zadanie 8
Napisz funkcj�, kt�ra wczyta dwie liczby i wy�wietli je w kolejno�ci rosn�cej.
Zadanie 9
Napisz funkcj�, kt�ra wczyta trzy liczby i wy�wietli je w kolejno�ci rosn�cej.
Zadanie 10
Napisz funkcj�, kt�ra wczyta numer dnia tygodnia i wy�wietli nazw� tego dnia.
Zadanie 11*
Napisz funkcj�, kt�ra wczyta wsp�czynniki r�wnania kwadratowego i wy�wietli pierwiastki tego r�wnania*/

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

