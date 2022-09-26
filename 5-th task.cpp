#include <iostream>

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

    switch (ChooseOperation)
    {
    case 1:
        addition(a, b);
        break;

    case 2:
    
        subtract(a, b);
        break;
    
    case 3:

        multyply(a, b);
        break;

    case 4:
    
        divide(a, b);
        break;
    
    default:
    
        std::cout << "Something wrong";
        break;
    
    }

    return 0;
}
