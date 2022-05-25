#include<iostream>
using namespace std;
int main()
{
    double span,w=25,v,m;
    cout<<"enter the span: ";
    cin>>span;
    v=((w*span*12)/2)-(w*span*12)/4;
    m=((w*span*span*12)/8)-(w*span*span*12)/32;
    cout<<"shear= "<<v<< "  moment  "<<m<<endl;
}
