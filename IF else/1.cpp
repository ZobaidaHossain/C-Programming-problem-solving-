#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n after inter changing:"<<endl;
    cout<<"a= "<<a<<"\nb= "<<b<<endl;
    return 0;
}
