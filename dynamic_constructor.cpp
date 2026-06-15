#include<iostream>
using namespace std;
class student
{
    private:
    int*age;
    public:
    student(int a)
    {
        age=new int;
        *age=a; 
        cout<<"student age:"<<*age<<endl;
    }
    ~student()
    {
        delete age;
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    student s1(19);
    return 0;
}