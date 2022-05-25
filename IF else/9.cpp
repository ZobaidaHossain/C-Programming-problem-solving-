#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x,y;
    cout<<"x =";
    cin>>x;
    if(x>=5){
        y=2*pow(x,5)-5*pow(x,2)+x;

    }
    else if(x<5){
        y=5*x+4;
    }
    cout<<"y ="<<y<<endl;
}
