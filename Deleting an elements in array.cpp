#include <iostream>

using namespace std;

int main()
{
    int a[100],i,n,k;
    cout<<"How many no gto store in the array"<<endl;
    cin>>n;
    cout<<"enter the number"<<endl;
    for(i =0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the postition ";
    cin>>k;
    k=k-1;
    for(i=k;i<n;i++)
        a[i]=a[i+1];
    cout<<"Contents of the array"<<endl;
    for(i=0;i<n-1;i++)
        cout<<a[i]<<endl;

    return 0;
}
