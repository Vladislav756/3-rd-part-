#include <iostream>

//�������� ������������ �� ���������� ���������������(enum) : chicken, lion, giraffe, elephant, duck � snake.
//�������� ������, ��� ���������� ����� ��� ������������� �, ��������� ������ ���������������, ��������������� ������ ������� ��������������� ����������� ��� ������������� ���������.
//� ������� main()

int main()
{
    enum legs_count {chicken, lion, giraffe, elephant, duck, snake};

    const int ANIMALS = 6;

    int arr[ANIMALS]{ chicken, lion, giraffe, elephant, duck, snake };

    const int two_legs = 2;

    const int fourth_legs = 4;

    const int zero_legs = 0;


    for (int i = 0; i < ANIMALS; i++)  // �� ������ ������-�� ������ ������� 4, ������?
    {
        if (i == 0)
        {
            arr[i] = two_legs;
        }
        else if (i == 1)
        {
            arr[i] = fourth_legs;
        }
        else if (i == 2)
        {
            arr[i] = fourth_legs;
        }
        else if (i == 3)
        {
            arr[i] = fourth_legs;
        }
        else if (i == 4)
        {
            arr[i] = two_legs;
        }
        else if(i == 5)
        {
            arr[i] = zero_legs;
        }
    }

    std::cout << "Chicken " << arr[0] << "\n" << "Lion " << arr[1] << "\n" << "Giraffe " << arr[2] << "\n" << "Elephant " << arr[3] << "\n" << "Duck " << arr[4] << "\n" << "Snake " << arr[5] << "\n";


    return 0;
}
