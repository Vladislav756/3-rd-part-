#include <iostream>

//������� ����������� �����, ������� ������� �� ����� ����� �� a �� b(a < b)
// ���� �� �������� b-1 �� �� ��������� ����� b, ����� �� ��� ����� ��������� ������� ��� ������� �����?
//� �� �������� ��� � ����� ���� ������ �

int Recursion(int a, int b)
{

    if (a < b-1)
    {
        a++;
    }
    else
    {
        return 0;
    }
   
    std::cout << a << "\n";

    return Recursion(a, b);
}

int main()
{
    std::cout << "Program to recursion from a to b\n" << "Insert a and b (a < b) \n";

    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    Recursion(a, b);

   /* 
   for (int i = a; i < b; i++)
    {
        std::cout << i << "\n";
    }
    */
        
    return 0;
}
