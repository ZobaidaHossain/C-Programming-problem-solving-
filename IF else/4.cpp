#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float d,i;
    float pi=3.1416;
    cout<<"Enter the diameter: ";
    cin>>d;
    i=(pi*pow(d,4))/64;
    cout<<"\n the moment of inertia of area of a circle: "<<i<<endl;
    return 0;
}
