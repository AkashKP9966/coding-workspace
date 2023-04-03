#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, temp, min;
    int arr[] = {64, 25, 12, 22, 11};

    for (i = 0; i < 4; i++)
    {
        min = arr[i];
        for (j = 0; j < 4; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                min = arr[j];
            }
            else
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
    return 0;
}