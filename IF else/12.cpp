#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,s,radius,area,side;
    int ch;
    cout<<"1: Area of circle";
    cout<<"\n 2: Area of rectangle";
    cout<<"\n 3: Area of square";
    cout<<"\n 4: Area of triangle";
    cout<<"\n enter your choice:  ";
    cin>>ch;
    if(ch==1)
    {
        cout<<"\n enter the radius of circle ";
        cin>>radius;
        area=3.1416*radius*radius;
        cout<<"area of circle= "<<area<<endl;
    }
     else if(ch==2)
    {
        cout<<"\n enter the length and width of rectangle ";
        cin>>a>>b;
        area=a*b;
        cout<<"area of ractangle= "<<area<<endl;
    }
     else if(ch==3)
    {
        cout<<"\n enter the length of side: ";
        cin>>side;
        area=side*side;
        cout<<"area of square= "<<area<<endl;
    }
     else if(ch==4)
    {
        cout<<"\n enter the base and height:  ";
        cin>>a>>b;
        area=(0.5)*a*b;
        cout<<"area of triangle = "<<area<<endl;
    }

}
