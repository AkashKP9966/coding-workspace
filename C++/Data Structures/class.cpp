#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std;

class A
{
private:
    int x;
    int y;

public:
    void setX(int a)
    {
        x = a;
    }

    int getX()
    {
        return x;
    }
};

int main()
{

    A a;
    a.setX(6);
    cout << "GET : " << a.getX() << endl;

    getch();
    return 0;
}