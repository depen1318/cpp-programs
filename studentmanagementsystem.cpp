#include<iostream>
using namespace std;
class student
{
 private:
    int roll;
    string name;
    int m1,m2,m3;
    int total;
    float average;
 public:
    student(int r,string n,int ma1,int ma2,int ma3)
    {
        name=n;
        roll=r;
        m1=ma1;
        m2=ma2;
        m3=ma3;
total=m1+m2+m3;
average=total/3;
if(average>=80)
{
    cout<<"distinction";
}
else if(average>=60)
{
    cout<<"first division";
}
else if(average>=40)
{
    cout<<"second division";
}
else{
    cout<<"fail";
}
cout<<"\nname="<<name<<endl;
cout<<"roll no="<<roll<<endl;
cout<<"total mark="<<total;


 }
};

int main()
{
    student s1(1028,"Dipendra Sunar",89,97,90);
    return 0;
    
}