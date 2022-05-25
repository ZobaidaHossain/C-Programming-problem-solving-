#include<iostream>
using namespace std;
int main()
{
    double x,y;
    cout<<"x= ";
    cin>>x;
    if(x>=0 && x<=5){
        y=5*x+2;
        cout<<"y= "<<y<<endl;
    }
    else if(x>5 && x<=10)
    {
        y=9*x+5;
        cout<<"y= "<<y<<endl;

    }
    else{
        cout<<"x is outside the range of the function";
    }

}
