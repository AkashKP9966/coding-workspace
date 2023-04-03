#include <iostream>
#include <conio.h>

using namespace std;

int arrSum(int *arr, int n) {
  int s = 0;
  for(int i = 0; i < n; i++) {
    s += arr[i];
  }
  return s;
}

int main()
{
  int n, i, sum = 0, arr[50];
  cout << "enter n" << endl;
  cin >> n;
  cout << "enter values" << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  // sum = arrSum(arr, n);
  cout << arrSum(arr, n);

  getch();
  return 0;
}