#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    double y;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"c= ";
    cin>>c;
    y=a+(b*b*b*b+(c/3))/(2+b);
    cout<<"y= "<<y<<endl;
    return 0;
}
