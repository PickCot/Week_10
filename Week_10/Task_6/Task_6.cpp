#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    const int length = 10;
    int array[length];

    srand(time(NULL));
    for (int j = 0; j < 10; j++)
    {
        array[j] = rand() % 10;
        cout << array[j] << endl;
    }

    bool NoZeros = true;

    for (int i = 0; i < length; i++)
    {
        if (array[i] == 0)
        {
            cout << "Елемент масиву "<< i << " є нулем.";
            NoZeros = false;
            break;
        }
    }
    if (NoZeros == true)
    {
        cout << "В масиві немає нулів.";
    }

}