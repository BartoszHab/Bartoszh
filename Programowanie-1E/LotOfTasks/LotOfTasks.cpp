//LotOfTasks

/*
Podstawy programowania:
1. Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb.
2. Program obliczaj¹cy pole prostok¹ta.
3. Program obliczaj¹cy objêtoœæ sto¿ka.
4. Program obliczaj¹cy pole ko³a.
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
7. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h
8. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
Pêtle:
1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
5. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
6.Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)

Instrukcja If:
1. Program sprawdzaj¹cy czy podana liczba jest liczb¹ pierwsz¹ (czyli tak¹, która dzieli siê tylko przez 1 i przez siebie sam¹)
2. Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
3. Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
4. Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
Pêtla for:b od 1 do 10 (np. 1, 4, 9, 16 itd.)
4. Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
5. Program wyœwietlaj¹cy na ekranie tabliczkê 
1. Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
2. Program obliczaj¹cy sumê liczb od 1 do 100
3. Program wyœwietlaj¹cy na ekranie kwadraty liczmno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
6. Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
7. Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
8. Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
9. Program wyœwietlaj¹cy na ekranie kolejne potêgi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)
10. Program wyœwietlaj¹cy na ekranie kolejne elementy ci¹gu a_n = a_{n-1} + a_{n-2}, gdzie a_0=1, a_1=1 (ci¹g ten zaczyna siê od 1, 1, 2, 3, 5, 8, 13 itd.).
Pêtla do-while:
1. Program pytaj¹cy u¿ytkownika o has³o i wyœwietlaj¹cy komunikat "has³o poprawne" lub "has³o niepoprawne" dopóki u¿ytkownik nie poda poprawnego has³a (np. "abc123").
2. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
Trudniejsze zadania:
1. Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
2. Program obliczaj¹cy najwiêkszy wspólny dzielnik (NWD) dwóch liczb
3. Program obliczaj¹cy najmniejsz¹ wspóln¹ wielokrotnoœæ (NWW) dwóch liczb.
4. Program wyci¹gaj¹cy informacje z numeru PESEL
5. Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
Dla zaawansowanych:
1. Program implementuj¹cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
2. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
3. Algorytm szyfrowania Morse'a - algorytm szyfruj¹cy, w którym ka¿da litera w tekœcie jest zamieniana na ci¹g znaków "+" i "-", zgodny z kodem Morse'a.
4. Napisz program, który pobiera od u¿ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wyœwietla ich iloczyn.
5. Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
6. Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
7. Napisz grê kó³ko i krzy¿yk.
*/

#include <iostream>
void task1()
{
	int numberFromUser1, numberFromUser2, result;

	std::cout << "Podaj Pierwsza Liczbe\n";
	std::cin >> numberFromUser1;
	std::cout << "Podaj Druga Liczbe\n";
	std::cin >> numberFromUser2;
	result = numberFromUser1 + numberFromUser2;
	result = result / 2;
	std::cout << "Srednia artymetyczna tych liczb to: " << result;


}

void task2()
{
	int a, b, P;
	std::cout << "Podaj dlugosc boku A\n";
	std::cin >> a;
	std::cout << "Podaj dlugosc boku B\n";
	std::cin >> b;
	P = a * b;
	std::cout << "Pole prostokata jest rowne:\n" << P;

}
//4. Program obliczaj¹cy pole ko³a.
void task3()
{
	int radius, height, area;
	std::cout << "Podaj promien: \n";
	std::cin >> radius;
	std::cout << "Podaj wysokosc: \n";
	std::cin >> height;
	area = 1 / 3;
}
void task4()
{
	int P, R;
	std::cout << "Podaj promien kola\n";
	std::cin >> R;
	R = R * R;
	P = 3.14 * R;
	std::cout << "Pole kola wynosi:\n " << P;
}
//5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2
void task5() {
	int firstNumber, secondNumber, result;
	std::cout << "podaj liczbe A\n";
	std::cin >> firstNumber;
	std::cout << "podaj liczbe B\n";
	std::cin >> secondNumber;
	firstNumber = firstNumber * firstNumber;
	secondNumber = secondNumber * secondNumber;
	result = secondNumber + firstNumber;
	std::cout << "Wynik to: " << result;
}
//6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h
void task6() {
	int firstNumber, secondNumber, result;
	std::cout << "podaj liczbe A\n";
	std::cin >> firstNumber;
	std::cout << "podaj liczbe B\n";
	std::cin >> secondNumber;
	firstNumber = 0.5 * firstNumber;
	result = firstNumber * secondNumber;
	std::cout << "Obj tego trojkata to: " << result;
}
//1. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta
void if1()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: \n";
	std::cin >> numberFromUser;

	if (numberFromUser % 2 == 0)
	{
		std::cout << "liczba jest parzysta\n";
	}
	else
		std::cout << "liczba nie parzysta\n";
}

//2. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero
void if2()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: \n";
	std::cin >> numberFromUser;

	if (numberFromUser > 0)
		std::cout << "Liczba jest dodatnia\n";
	else
		if (numberFromUser < 0)
			std::cout << "Liczba jest ujemna\n";
		else
			std::cout << "Liczba to zero\n";
}

//3. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
void if3()
{
	int numberFromUser;

	std::cout << "Podaj liczbe: \n";
	std::cin >> numberFromUser;

	if (numberFromUser % 4 == 0 && numberFromUser % 100 != 0)
		std::cout << "rok jest przestepny\n";
	else
		std::cout << "rok nie jest przestepny\n";
}

//4. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void if4()
{
	int numberFromUser;

	std::cout << "Moja ocena to: \n";
	std::cin >> numberFromUser;

	switch (numberFromUser)
	{
	case 1:
		std::cout << "Masz jedynke\n";
		break;
	case 2:
		std::cout << "Masz dwojke\n";
		break;
	case 3:
		std::cout << "Masz trojke\n";
		break;
	case 4:
		std::cout << "Masz czworke\n";
		break;
	case 5:
		std::cout << "Masz piatke\n";
		break;
	case 6:
		std::cout << "Masz szustke\n";
		break;
	default:
		std::cout << "Nie ma takiej oceny\n";
	}
}

//5. Program sprawdzaj¹cy czy podane has³o jest poprawne(np.jeœli has³o jest "abc123", program powinien 
//    wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void if5()
{
	std::string userPassword, userText;
	userPassword = "Haslo123";
	std::cout << "podaj has³o:\n";
	std::cin >> userText;

	if (userPassword == userText)
		std::cout << "Poprawne haslo\n";
	else
		std::cout << "Zle haslo\n";
}

//6.Program sprawdzaj¹cy czy podana data jest poprawna(np.sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)

void if6()
{
	int day, month, year;
	std::cout << "podaj dzien:\n";
	std::cin >> day;
	std::cout << "podaj miesiac:\n";
	std::cin >> month;
	std::cout << "podaj rok:\n";
	std::cin >> year;

	if (day < 32 && day >0)
		std::cout << "Poprawny dzien\n";
	else
		std::cout << "Zly dzien\n";


	if (month < 13 && month >0)
		std::cout << "Poprawny miesiac\n";
	else
		std::cout << "Zly miesiac\n";

	if (year > 0 && year < 2024)
		std::cout << "Poprawny rok\n";
	else
		std::cout << "Zly rok\n";
}
//7. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury(np. "ciep³o" dla temperatury
//powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)

void if8()
{
	int temperatur;
	std::cout << "podaj temerature:\n";
	std::cin >> temperatur;

	if (temperatur > 19)
		std::cout << "bardzo cieplo";
	else
		if (temperatur > 9 && temperatur < 20)
			std::cout << "cieplo";
		else
			if (temperatur > 0 && temperatur < 10)
				std::cout << "chlodno";
			else
				if (temperatur < 1)
					std::cout << "bardzo chlodno";
}

//1. Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10

void loopfor1()
{
	for (int i = 1; i <= 10; i++)
		std::cout << i << "\n";
}



//2. Program obliczaj¹cy sumê liczb od 1 do 100
void loopfor2()
{
	int resultat = 0;
	for (int i = 1; i <= 100; i++)
	{
		resultat = resultat + i;
		std::cout << resultat << "\n";
	}
}

//3. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)

void loopfor3()
{
	for (int i = 1; i <= 10; i++)
		std::cout << i * i << "\n";
}

void loopfor4()
{
	int i2 = 1, sume = 1;
	for (int i = 1; i <= 10; i++)
	{
		if (i2 <= i)
		{
			sume = sume * i2;
			i2++;
			std::cout << sume << "\n";
		}
	}
}

//5. Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).

void loopfor5()
{
	int first = 1, second = 1;
	for (int i = 1; i < 11; i++)
	{
		std::cout << first << "*" << i << "=" << first * i << " \n";
		second++;
		if (i == 10)
		{
			i = 0;
			first++;
		}

		if (first >= 11)
			i == 100;
	}
}

//6. Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void loopfor6()
{
	int left;
	for (int i = 1; i <= 100; i++)
	{
		left = i % 3;

		if (left == 0)
			std::cout << i << "\n";
	}

}

//7. Program obliczaj¹cy sumê kwadratów liczb od 1 do 10

void loopfor7()
{
	int sum = 0, multiplication;
	for (int i = 1; i <= 10; i++)
	{
		multiplication = i * i;
		sum = multiplication + sum;
		std::cout << i << "*" << i << " = " << multiplication << "======>" << sum << "\n";

	}

}

//8. Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu 
//(ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

void loopfor8()
{
	int last = 0, lastsecond = 1, sum;

	for (int i = 1; i <= 20; i++)
	{
		sum = last + lastsecond;
		std::cout << sum << "\n";

		if (last >= lastsecond)
			lastsecond = sum;
		else
			last = sum;
	}
}

//9. Program wyœwietlaj¹cy na ekranie kolejne potêgi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)

void loopfor9()
{
	int multiple = 1, a = 1;
	for (int i = 0; i <= 10; i++)
	{
		a = 1;
		multiple = 1;
		while (a <= i)
		{
			multiple = 2 * multiple;
			a++;
		}
		std::cout << "2 ^ " << i << " = " << multiple << "\n";
	}

}



int main()
{
	//task1();
	//task2();
	//task4();
	//task5();
	//task6();
	//if1();
	//if2();
	//if3();
	//if4();
	//if5();
	//if6();
	//if7();
	//if8();
	//loopfor1();
	//loopfor2();
	//loopfor3();
	//loopfor4();
	//loopfor5();
	//loopfor6();
	//loopfor7();
	//loopfor8();
	loopfor9();
}
