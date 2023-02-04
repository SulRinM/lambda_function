/*
Напишите программу, которая все нечётные элементы массива (std::vector)
умножает на 3 с помощью лямбда-функции.
Циклы использовать не нужно.
*/


#include <iostream>
#include <vector>
#include <algorithm>


std::vector<int> arr = { 4, 7, 9, 14, 12 };

int main()
{
    std::cout << "Input data: ";
    std::for_each(arr.begin(), arr.end(), [](int x)
        {
            std::cout << x << " ";
        }
    );
    std::cout << std::endl;


    std::cout << "Output data: ";
    std::for_each(arr.begin(), arr.end(), [](int x)
        {
            if (x % 2 != 0)
            {
                std::cout << x * 3 << " ";
            }
            else std::cout << x << " ";
        }
    );


    return 0;
}

