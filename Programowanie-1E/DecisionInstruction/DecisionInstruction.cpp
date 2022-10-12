#include <iostream>

/*
Napisz funkcjê która wczyta dwie liczby i wykona dzielenie na nich
*/


void task1()
{//                                suma  ró¿nica   iloczyn   iloraz   reszta       
    int firstNumber, secondNumber,quotient;
    std::cout << "Podaj pierwsza liczbe\n";
    std::cin >> firstNumber;
    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;


    
    quotient = firstNumber / secondNumber;

    
    std::cout << "Iloraz: " << quotient << "\n";



}







int main()
{
    task1();
}

