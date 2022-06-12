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

    vectorClass operator + (vectorClass const& obj) {
        return vectorClass(x + obj.x, y + obj.y, z + obj.z);
    }

    vectorClass operator - (vectorClass const& obj) {
        return vectorClass(x - obj.x, y - obj.y, z - obj.z);
    }

    int operator * (vectorClass const& obj) {
        return x * obj.x + y * obj.y + z * obj.z;
    }

    vectorClass operator | (vectorClass const& obj) {
        return vectorClass(y * obj.z - z * obj.y,
            z * obj.x - x * obj.z,
            x * obj.y - y * obj.x);
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    int getZ() {
        return z;
    }

    void printVector() {
        cout << "(" << x << ", " << y << ", " << z << ")\n";
    }
};

