#include <iostream>
#include <template.cpp>
using namespace std;

int main()
{
    Pair<int> p1;

    p1.setX(10);
    p1.setY(20);

    cout << p1.getX() << " " << p1.getY() << endl;
}