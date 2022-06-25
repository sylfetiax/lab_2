#include "vector.h"
using namespace std;

vectorClass vectorClass::operator + (vectorClass const& obj) {
    return vectorClass(x + obj.x, y + obj.y, z + obj.z);
}

vectorClass vectorClass::operator - (vectorClass const& obj) {
    return vectorClass(x - obj.x, y - obj.y, z - obj.z);
}

int vectorClass::operator* (vectorClass const& obj) {
    return x * obj.x + y * obj.y + z * obj.z;
}

vectorClass vectorClass::operator | (vectorClass const& obj) {
    return vectorClass(y * obj.z - z * obj.y,
        z * obj.x - x * obj.z,
        x * obj.y - y * obj.x);
}

int vectorClass::getX() {
    return x;
}

int vectorClass::getY() {
    return y;
}

int vectorClass::getZ() {
    return z;
}
