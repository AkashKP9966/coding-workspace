#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q, arr_size;
    cin >> n >> q;
    vector<vector<int>> a(n); 
    for (int i = 0; i < n; i++)
    {
        cin >> arr_size;
        vector<int> k(arr_size); //vector initialized

        for (int j = 0; j < arr_size; j++)
        {
            cin >> k[j];
        }
        a[i] = k;
    }

    for(int z  = 0; z < q; z++)
    {
        int i, j;
        cin >> i >>  j;
        cout << a[i][j];
    }

}
