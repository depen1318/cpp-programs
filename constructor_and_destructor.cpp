#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"constructor of class Base"<<endl;
    }
    ~Base()
    {
    cout<<"destructor of class Base"<<endl;
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"constructor of class Derived"<<endl;
    }
    ~Derived()
    {
        cout<<"destructor of class Derived"<<endl;
    }
};
int main()
{
    Derived d;
    return 0;
}
