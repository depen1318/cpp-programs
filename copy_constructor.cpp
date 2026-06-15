#include<iostream>
using namespace std;
class number
{ 
    int value;
    public:
    number(int a)
    {
        value=a;
        cout<<"value is:"<<value<<endl;

    }
    number(const number &n)
    {
        value=n.value;
        cout<<"copy constructor is callled"<<endl;
        cout<<"value is:"<<value<<endl;
    }
};
int main()
{
    number n1(10);
    number n2=n1;
    return 0;
}