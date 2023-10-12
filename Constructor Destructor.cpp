#include <iostream>

using namespace std;

class A 
{
    public:
    A()
    {
        cout<<"\nCalling default base class constructor";
    }
    
    ~A()
    {
        cout<<"\nCalling default base class destructor";
    }
};

class B:public A 
{
    public:
    B()
    {
        cout<<"\nCalling default derived constructor";
    }
    
    ~B()
    {
        cout<<"\nCalling default derived destructor";
    }
};

int main()
{
    B obj1;

    return 0;
}
