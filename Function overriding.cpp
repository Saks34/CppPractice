#include <iostream>

using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"\nIn base class A ";
    }
};

class B:public A
{
    public:
    void show()
    {
        cout<<"\nIn derived class B ";
    }
};

int main()
{
    B obj1;
    obj1.show();
    obj1.A::show();

    return 0;
}

