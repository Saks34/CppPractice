#include <iostream>

using namespace std;


void fun(int i)
{
    cout<<i<<endl;
}
void fun(double j)
{
    cout<<j<<endl;
}

int main()
{
    fun(12);
    fun(1.2);

    return 0;
}
