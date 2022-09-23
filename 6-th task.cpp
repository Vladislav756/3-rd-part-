#include <iostream>

//Создайте 3 переменных (int, double, string), проинциализируйте их, далее создайте 3 метода с одним названием "variableType", но каждый из них принимает разные типы данных (int, double, string). 
//На выходе каждый метод должен выдавать сообщение по типу "число - это integer". Для каждоый ранее созданной переменной вызовите метод "variableType"

int variableType(int number)
{
    std::cout << "Number is integer " << number;
}
double variableType(double bignumber)
{
    std::cout << "Number with point double " << bignumber;
}
std::string variableType(std::string stroki)
{
    std::cout << "String is string " << stroki;
}


int main()
{
    int chislo = 300;

    double chislo_stochkoi = 3.14;

    std::string stroka = "stroka je";

    variableType(chislo);

    variableType(chislo_stochkoi);

    variableType(stroka);

    return 0;
}
