#include <iostream>
#include <stdlib.h>

using namespace std;

struct Node
{
    int i;
    struct Node *p;
};

int insert(int d, struct Node **h)
{
    struct Node *nw = (struct Node*)malloc(sizeof(struct Node));
    nw->i=d;
    nw->p=*h;
    *h=nw;
    return 0;
}
void print (struct Node *h)
{
    struct Node *t=h;
    while (t!=NULL)
    {
        cout<< t->i<<endl;
        t=t->p;
    }
}

int main()
{
    struct Node *h = NULL;
    int j,d;
    cout<<"Enter the no. of elements : ";
    cin>>j;
    
    for(int i=1;i<=j;i++)
    {
        cin>>d;
        insert(d, &h);
    }
    print(h);
    return 0;
}
