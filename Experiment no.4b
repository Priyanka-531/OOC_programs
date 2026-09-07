#include <iostream>
using namespace std;

class Construct
{
    float area;

public:
    Construct()
    {
        area = 0;
    }

    Construct(int a, int b)
    {
        area = a * b;
    }

    void display()
    {
        cout << "Area = " << area << endl;
    }

    ~Construct()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Construct o;
    Construct o2(10, 20);

    o.display();
    o2.display();

    return 0;
}
