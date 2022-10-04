

#include <iostream>



//funkcja która pobierze dwie liczby oraz wykona podstawowe obliczenia artymetyczne

void task1()
{//                                suma  ró¿nica   iloczyn   iloraz   reszta       
    int firstNumber, secondNumber, sum, diffrence, product, quotient, rest;
    std::cout << "Podaj pierwsza liczbe\n";
        std::cin >> firstNumber;
    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;

    sum = firstNumber + secondNumber;
    diffrence = firstNumber - secondNumber;
    product = firstNumber * secondNumber;
    quotient = firstNumber / secondNumber;
    rest = firstNumber % secondNumber;

    std::cout << "Suma: " << sum << "\n";
    std::cout << "Roznica: " << diffrence << "\n";
    std::cout << "Iloczyn: " << product << "\n";
    std::cout << "Iloraz: " << quotient << "\n";
    std::cout << "Reszta: " << rest << "\n";


}




int main()
{
    task1();





}