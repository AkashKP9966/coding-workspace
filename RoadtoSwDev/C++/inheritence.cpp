#include <iostream>
using namespace std;


class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int setLength(int l)
        {
            length = l; 
        }
        int setBreadth(int b)
        {
            breadth = b;
        }  
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }      
};

class Cuboid: public Rectangle
{
    private:
        int height;
    public:
        int setHeight(int h)
        {
            height = h;
        }
        int getHeight()
        {
            return height;
        }
        int Volume()
        {
            return (getLength() * getBreadth() * getHeight());
        }
};

int main()
{
    Rectangle r;
    Cuboid c;
    c.setLength(6);
    c.setBreadth(8);
    c.setHeight(4);

    cout << c.getLength() << endl;
    cout << c.getBreadth() << endl;
    cout << c.getHeight() << endl;
    cout << c.Volume() << endl;
    
}




