#include <iostream>

using namespace std;


void fun(int i)
{
    cout<<i<<endl;
}
void fun(int *j)
{
    cout<<*j<<endl;
}

int main()
{
    int a = 10;
    int *b=&a;
    fun(a);
    fun(b);
    

    return 0;
}
