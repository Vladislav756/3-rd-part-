#include <iostream>

//�������� 3 ���������� (int, double, string), ����������������� ��, ����� �������� 3 ������ � ����� ��������� "variableType", �� ������ �� ��� ��������� ������ ���� ������ (int, double, string). 
//�� ������ ������ ����� ������ �������� ��������� �� ���� "����� - ��� integer". ��� ������� ����� ��������� ���������� �������� ����� "variableType"

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
