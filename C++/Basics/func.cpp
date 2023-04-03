#include <iostream>
#include <conio.h>

using namespace std;

void Swap(int &n, int &m) {
    int t = m;
    m = n;
    n = t;
    cout << "Inside Func" << endl;
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;

}

int main() {

    int n, m;
    cin >> n >> m;
    Swap(n, m);
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    getch();
    return 0;
}