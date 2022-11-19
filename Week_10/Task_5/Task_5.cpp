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
       

    int max1 = array[0], max2 = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] > max1)
        {
            max2 = max1;
            max1 = array[i];
        }
    }
        cout << max2 << endl;
}