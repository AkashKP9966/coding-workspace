#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, key, size;
    int arr[] = {67, 11, 32, 55, 9, 27};

    size = sizeof(arr) / sizeof(arr[0]);
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    getch();
    return 0;
}