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

    int max = 0, min = 0;
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = i;
        }
        if (array[i] < min)
        {
            min = i;
        }
    }
    int temp = array[min];
    array[min] = array[max];
    array[max] = temp;

    for (int i = 0; i < length; i++)
    {
        cout << array[i] << endl;
    }
}