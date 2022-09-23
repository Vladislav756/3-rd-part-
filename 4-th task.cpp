#include <iostream>

//Создать метод "addition", который при вызове запрашивает у пользователя 2 числа, складывает их и выводит в консоль результат.
//Возможно я не очень понял задачу, мне сделать это надо было через функцию?

int Addition(int a, int b)
{
    std::cout << "Sum of a and b = " << a + b;
    return 0;
}

int main()
{
    std::cout << "addition - insert two numbers and get their sum\n";  

    int a = 0, b = 0;

    std::cin >> a >> b;
    
    Addition(a, b);

    return 0;
}
