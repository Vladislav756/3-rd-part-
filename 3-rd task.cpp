#include <iostream>

//—оздать рекурсивный метод, который выводит на экран числа от a до b(a < b)
// ≈сли не добавить b-1 то он добавл€ет число b, можно ли это более человечно сделать или костыль сойдЄт?
//я не учитывал что а может быть меньше б

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
