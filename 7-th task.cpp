#include <iostream>
#include <string>

//�������� ������ string ������ ������� �� ������ 3 ������� � �������� �����, ������� ��������� ������ � 1 ������
//�� ������ ����� ������ �������� ������� ��� ������ ����������� � ������.

void ContainSymbol(char a, std::string str)
{
    int meets = 0;

    //for (int i = 0; i < sizeof str; i++)
    int i = 0;

    while (i < sizeof str)
    {
        if (a == str[i])
        {
            meets++;
            i++;
        }
        else
            i++;
        
    }
    std::cout << meets << "\n";
}


int main()
{
    std::string str = "Sperasoft";

    char ch;

    std::cout << "Insert symbol and if word has it, than it appears how many times that symbol meets in it \n";

    std::cin >> ch;

    ContainSymbol(ch, str);

    return 0;
}