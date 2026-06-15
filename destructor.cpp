#include<iostream>
using namespace std;
class student
{
    string name;
    public:
    student()
    {
        cout<<"constructor is called"<<endl;

    }
    ~student()
    {
        cout<<"destructor is called"<<endl;
    }

    
};
int main()
{
    student s1;
    return 0;
}