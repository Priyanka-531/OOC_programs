
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of floats: " << add(5.1, 10.0) << endl;
    return 0;
}
