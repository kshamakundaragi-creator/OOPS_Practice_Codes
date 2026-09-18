#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void display()
    {
        cout<<"Base class A"<<endl;
    }
};

class B:public A
{
    public:
    int b;
    void display()
    {
        cout<<"Derived class B"<<endl;
        cout <<"value of a: "<<a <<endl; // a is visible in class B
    }
};

int main()
{
    B obj;
    obj.a = 10; // a is accessible in main function through object of class B
    obj.b = 20;
    obj.display(); // calls display function of class B
    return 0;
}
