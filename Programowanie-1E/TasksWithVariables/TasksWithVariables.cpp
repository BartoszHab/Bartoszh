

#include <iostream>
#include <cmath>


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

//
void task2()
{

    std::cout << "15/4 =" << (15 / 4) << '\n';
    std::cout << "15/4.0 =" << (15 / 4.0) << '\n';
    std::cout << "15.0/4 =" << (15.0 / 4) << '\n';
    std::cout << "15.0/4.0 =" << (15.0 / 4.0) << '\n';
    std::cout << "15.0/4.0 =" << (15.0 / 4.0) << '\n';


}

/*Napisz Funkcje ktora obliczy pole trojkata*/
void task3()
{
    float sideA, height,wynik ;
    std::cout << "Podaj podstawe trojkata\n";
    std::cin >> sideA;
    
    std::cout << "Podaj wysokosc trojkata\n";
    std::cin >> height;
    
    float area;
    area = 0.5 * sideA * height;

    std::cout << "Pole trojkata wynosi:" << area << "\n";
    

}
/*przekatna kwadratu*/

void task4()
{
    float side;
    std::cout << "Podaj podstawe kwadratu\n";
    std::cin >> side;
    
    float diagonal;
    diagonal = side * sqrt(2);

    std::cout << "przekatna kwadratu:" << diagonal << "\n";








}

int main()
{
    //task1();
     //task2();
    //task3();
     task4();
   





}