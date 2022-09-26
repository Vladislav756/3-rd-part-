#include <iostream>

void variableType(int number)
{
    std::cout << "Number is integer \n" << number;
}
void variableType(double bignumber)
{
    std::cout << "Number with point double \n" << bignumber;
}
void variableType(std::string stroki)
{
    std::cout << "String is string \n" << stroki;
}


int main()
{
    int number = 100;

    double number_with_point = 3.14;

    std::string str = "string";

    variableType(number);

    variableType(number_with_point);

    variableType(str);

    return 0;
}
