#include<iostream>
using namespace std;
int main()
{
    float n1,n2,n3;
    cout<<"enter three numbers: ";
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
        cout<<"largest number: "<<n1;
    if(n2>=n1 && n2>=n3)
        cout<<"largest number: "<<n2;
    if(n3>=n1 && n3>=n2)
        cout<<"largest number: "<<n3;
    return 0;
}

