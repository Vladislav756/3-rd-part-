#include <iostream>
//—оздать подобные методы дл€ вычитани€, умножени€ и делени€, а также создать метод "ChooseOperation", 
//который принимает на вход enum OperatorType, 
//который вам необходимо создать, он должен состо€ть из 4-х операций, методы дл€ которых были уже созданы. 
//ѕри вызове ChooseOperation пользователь должен ввести номер операции, после чего соответсвенный метод будет выполнен.

int addition(int a, int b)
{
    std::cout << "Sum of a and b = " << a + b << "\n";
 
    return a + b;
}
int subtract(int a, int b)
{
    std::cout << "Subtraction a - b = " << a - b << "\n";

    return 0;
}

int multyply(int a,int b)
{
    std::cout << "Multyply a * b = " << a * b << "\n";

    return 0;
}

int divide(int a, int b)
{
    std::cout << "Divide a / b = " << a / b << "\n";

    return 0;
}




int main()
{
    int ChooseOperation = 0;

    enum OperatorType {ADDICTION,SUBTRACT,MULTYPLY,DIVIDE};
    
    int a = 0, b = 0;

    std::cout << "Incert two numbers and action: \n 0: + \n 1: - \n 2: * \n 3: / \n";

    std::cin >> a >> b;

    std::cin >> ChooseOperation;

    if (ChooseOperation == ADDICTION)
    {
        addition(a, b);
    }
    else if (ChooseOperation == SUBTRACT)
    {
        subtract(a, b);
    }
    else if (ChooseOperation == MULTYPLY)
    {
        multyply(a, b);
    }
    else if (ChooseOperation == DIVIDE)
    {
        divide(a, b);
    }
    else
    {
        std::cout << "Something wrong";
    }

    return 0;
}
