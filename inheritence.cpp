#include <iostream>

using namespace std;

class M
{
   protected:
   int m;
   public:
   int get_m(int);
};

class N
{
    protected:
    int n;
    public:
    int get_n(int);
};

class P:public M, public N
{
    public:
    int display(void);
};

int M::get_m(int x)
{
    m=x;
}
int N::get_n(int y)
{
    n=y;
}
int P::display(void)
{
    cout<<"m="<<m<<"\n";
    cout<<"n="<<n<<"\n";
    cout<<"m*n = "<<m*n<<"\n";
    
}
int main()
{
    P p;
    p.get_m(10);
    p.get_n(20);
    p.display();
    return 0;
}
