#include <iostream>
#include <string>
void ContainSymbol(char a, char str[])
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
    //std::string str = "Sperasoft";

    char arr_str[] = "Speeerasoft";

    char ch;

    std::cout << "Insert symbol and if word has it, than it appears how many times that symbol meets in it \n";

    std::cin >> ch;

    ContainSymbol(ch, arr_str);

    return 0;
}
