#include <iostream>

using namespace std;

int main()
{
    int a[10],k,i,n,c=-1;
    cout<<"Enter the number of elements:\t";
    cin>>n;
    cout<<"Enter the elements: \t";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the elements to be found \t";
    cin>>k;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Key found at location \t"<<i;
            c++;
            break;
        }
        
    }
    if(c==-1)
    {
        cout<<"Element not found in the list";
    }
    return 0;
}
