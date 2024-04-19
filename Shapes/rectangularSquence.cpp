#include <iomanip>
#include <iostream>

void rectangularSequence(int size)
{
    int s = 10;
    for (int i = 1; i <= size; ++i)
    {
        for (int j = 0; j <= 9; ++j)
        {
            //  std::cout << i*10 + j << std::setw(3);
            std::cout << s++ << std::setw(5);
        }

        std::cout << std::left << std::endl;
    }
}