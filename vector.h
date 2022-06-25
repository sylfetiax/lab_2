#pragma once
#include <iostream>
using namespace std;

class vectorClass {
    int x, y, z;
public:
    vectorClass(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }

    vectorClass operator + (vectorClass const& obj);

    vectorClass operator - (vectorClass const& obj);

    int operator * (vectorClass const& obj);

    vectorClass operator | (vectorClass const& obj);

    int getX();
    int getY();
    int getZ();

};

