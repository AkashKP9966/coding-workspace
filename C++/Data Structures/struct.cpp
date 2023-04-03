#include <iostream>
#include <cstdio>
#include <conio.h>

using namespace std ;

struct Point {
    int x;
    int y;
};

int main() {

    Point a[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d %d", &a[i].x, &a[i].y);
    }

    for(int i = 0; i < 10; i++) {
        printf("Element %d: (%d, %d)\n", i + 1, a[i].x, a[i].y);
    }

    getch();
    return 0;

}