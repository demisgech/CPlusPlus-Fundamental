#include <iostream>

using namespace std;
void xPyramid(int size)
{
    int xDimension = 1;
    int yDimension = size;
    int middle = size / 2;
    for (int i = 1; i <= size; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= size; j++)
        {
            if (j >= xDimension && j <= yDimension)
            {
                cout << ch << " ";
                if (j <= middle)
                    ch++;
                else
                    ch--;
            }
            else
                cout << "  ";
        }

        if (i <= middle)
        {
            xDimension++;
            yDimension--;
        }

        else
        {
            xDimension--;
            yDimension++;
        }
        cout << endl;
    }
}