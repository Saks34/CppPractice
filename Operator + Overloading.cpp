#include <iostream>

using namespace std;

class sum
{
    public:
    int a,b;
    sum()
    {
        b=50;
    }
    
    void setdata()
    {
        cout<<"Enter a:";
        cin>>a;
    }
    
    void operator+(sum s1)
    {
        return(a+s1.b);
    }
};

int main()
{
    int d;
    sum s,t;
    s.setdata();
    d=s+t;
    cout<<"Sum is:"<<d;

    return 0;
}
