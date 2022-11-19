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

    int A, res = 0;
    cout << "Введіть число А ";
    cin >> A ;

    for (int i = 0; i < length; i++)
    {
        if (array[i] > A)
        {
            res++;
        }
    }
   
    cout << endl << res << endl;
}