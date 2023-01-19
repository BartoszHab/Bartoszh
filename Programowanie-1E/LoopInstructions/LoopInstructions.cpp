#include <iostream>

//Liczba dodatnia do skutku
void task1()
{
	int number;
	do
	{
		std::cout << "Podaj liczbe dodatnia:\n";
		std::cin >> number;

	} while (number <= 0);
	std::cout << "podales liczbe" << number << "\n";
}
/*zad 2
Napisz funkcje która  wyœwietli wszystkie liczby z przedzia³u (1;100)*/

void task2()
{
	system("color A");
	int currentNumber = 1;

	do
	{
		std::cout << currentNumber << ", ";
		currentNumber++;
	} while (currentNumber != 1111111);
}





void task3()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	if (firstNumber < secondNumber)
		std::cout << "Wieksza liczba to: " << firstNumber;
	else
		std::cout << "Wieksza liczba to: " << secondNumber;
}

void task4()
{
	int lowRange, highRange;
	std::cout << "Podaj zakres dolny \n";
	std::cin >> lowRange;
	std::cout << "Podaj zakres dolny \n";
	std::cin >> highRange;

	int currentNumber = lowRange;
	do {
		std::cout << currentNumber;
		currentNumber++;
	} while (currentNumber != highRange + 1);
}

void task5()
{
	int randomNumber;

	srand(time(NULL));
	/*<a; b> a <= b

	<0; b-a>
	rand() % (b-a+1) +a;
	*/
	randomNumber = rand() % 100 + 1;
	std::cout << "Wylosowana liczba to " << randomNumber << "\n";
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczbe:\n";
		std::cin >> numberFromUser;
	} while (randomNumber != numberFromUser);

	std::cout << "Gratulacje!";

}

void task6()
{
	int lowRange, highRange;
	std::cout << "Podaj zakres dolny \n";
	std::cin >> lowRange;
	std::cout << "Podaj zakres dolny \n";
	std::cin >> highRange;

	int currentNumber = lowRange;
	if (lowRange > highRange);
	std::cout << "Bledny zakres\n";
	while (currentNumber <= highRange + 1);
	{
		std::cout << currentNumber << ",";
		currentNumber++;
	}
	std::cout << "\n Ta linijka jest poza petla \n";
}
// NWD(a,b) = a jeœli b = 0
//NWD (a,b)= NWD(b,a % b) jeœli b != 0
void task7()
{
	int a = firstNumber;
	int b = secondNumber;

	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b = tmpA % b;
	}
	std::cout << "NWD = " << a << "\n";
}

void  task8()
{
	int numberFromUser;
	std::cout << "Podaj LIczbe:\n";
	std::cin >> numberFromUser;
	int result = 1;
	int i = 2;
	while (i <= numberFromUser)
	{
		result = result * i;
		i++;
	}
	std::cout << numberFromUser << "! = " << result << "\n";
}

void task78()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz\n";
	std::cin >> textFromUser;

	std::cout << "Uzytkownik poda³: " << textFromUser << "\n";
}



int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task78;
}