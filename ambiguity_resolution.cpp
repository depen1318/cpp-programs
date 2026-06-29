#include<iostream>
using namespace std;
class A{
public:
    void show()
              {
                  cout<<"base class funtion"<<endl;
              }
              };
class B
{
public:
    void show()
    {
        cout<<"B class function"<<endl;
    }
};
class C:public A,public B
{

};
int main()
{

    C c;
    c.A::show();
    c.B::show();
    return 0;
}
