#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string username;
    string password;
    public:
    void signup(string uname,string upassword);
    void verify();
};
student::signup(string uname,string upassword)

{
uswr
}
student::verify()
{
    string validu="depen.02";
    string validp="depennalina1028";
    if(username==validu && password==validp)
    {
        cout<<"valid student";
    }
    else{
        cout<<"not a college student";
    }

}
int main()
{
    string un,up;
    cout<<"enter your username..";
    cin>>un;
    cout<<"enter your password..";
    cin>>up;
    signup(un,up);
    verify();
    return 0;
}