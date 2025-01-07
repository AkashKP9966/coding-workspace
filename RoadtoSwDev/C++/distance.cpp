#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int u, a, t;
    cout << "input initial speed" << endl;
    cin >> u ;
    cout << "input accelaration"<< endl;
    cin >> a;
    cout << "input time" << endl;
    cin >> t;  
    float speed = u + a * t;

    cout << "speed = " << speed;

}