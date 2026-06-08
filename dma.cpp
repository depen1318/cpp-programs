#include<iostream>
using namespace std;
int main()
{
    int* a = new int;
    *a = 10; 
    cout<<"value of a= "<<*a<<endl;
    delete a; 
    return 0;
}