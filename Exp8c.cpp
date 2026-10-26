#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    bool operator==(const MyClass &other) const {
        return value == other.value;
    }

    bool operator!=(const MyClass &other) const {
        return !(*this == other);
    }

    bool operator<(const MyClass &other) const {
        return value < other.value;
    }

    bool operator>(const MyClass &other) const {
        return value > other.value;
    }

    bool operator<=(const MyClass &other) const {
        return !(*this > other);
    }

    bool operator>=(const MyClass &other) const {
        return !(*this < other);
    }
};

int main() {
    MyClass obj1(20);
    MyClass obj2(20);

    if (obj1 == obj2)
        cout << "Obj1 is equal to Obj2" << endl;
    else
        cout << "Obj1 is not equal to Obj2" << endl;

    if (obj1 != obj2)
        cout << "Obj1 is not equal to Obj2" << endl;
    else
        cout << "Obj1 is equal to Obj2" << endl;

    if (obj1 < obj2)
        cout << "Obj1 is less than Obj2" << endl;
    else
        cout << "Obj1 is not less than Obj2" << endl;

    if (obj1 > obj2)
        cout << "Obj1 is greater than Obj2" << endl;
    else
        cout << "Obj1 is not greater than Obj2" << endl;

    if (obj1 <= obj2)
        cout << "Obj1 is less than or equal to Obj2" << endl;
    else
        cout << "Obj1 is not less than or equal to Obj2" << endl;

    if (obj1 >= obj2)
        cout << "Obj1 is greater than or equal to Obj2" << endl;
    else
        cout << "Obj1 is not greater than or equal to Obj2" << endl;

    return 0;
}
