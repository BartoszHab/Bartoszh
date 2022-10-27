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



*/


void task1()
{//                                suma  ró¿nica   iloczyn   iloraz   reszta       
    int firstNumber, secondNumber,quotient;
    std::cout << "Podaj pierwsza liczbe\n";
    std::cin >> firstNumber;
    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;


    if(secondNumber !=0)
        quotient = firstNumber / secondNumber;

    if(secondNumber !=0)
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





int main()
{
    //task1();
     task2();
}

