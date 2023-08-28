#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
    
    int rollno;
    char name[10];
    int marks;
    
    public:
    
    static int objectCount;
    Student(){
        objectCount++;
    }
    
    void getdata(){
        cout<<"Enter rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter marks:"<<endl;
        cin>>marks;
    }
    void putdata()
    {
        cout<<"Roll Number = "<<rollno<<endl;
        cout<<"Marks = "<<marks<<endl;
        cout<<"Name = "<<name<<endl;
    }
};

int Student::objectCount=0;

int main(void){
    Student s1;
    s1.getdata();
    s1.putdata();
    
    cout<<"Total objects created ="<<Student::objectCount<<endl;
    
    return 0;

}

