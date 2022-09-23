#include <iostream>

//Создайте перечисление со следующими перечислителями(enum) : chicken, lion, giraffe, elephant, duck и snake.
//Объявите массив, где элементами будут эти перечислители и, используя список инициализаторов, инициализируйте каждый элемент соответствующим количеством лап определенного животного.
//В функции main()

int main()
{
    enum legs_count {chicken, lion, giraffe, elephant, duck, snake};

    const int ANIMALS = 6;

    int arr[ANIMALS]{ chicken, lion, giraffe, elephant, duck, snake };

    const int two_legs = 2;

    const int fourth_legs = 4;

    const int zero_legs = 0;


    for (int i = 0; i < ANIMALS; i++)  // По именам почему-то всегда выдавал 4, почему?
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
