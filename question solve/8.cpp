#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,i,pro,lcm,hcf=1;
    cout<<"enter the 1st number: ";
    cin>>n1;
    cout<<"enter the 2nd number: ";
    cin>>n2;
    cout<<"enter the 3rd number: ";
    cin>>n3;
    pro=n1*n2*n3;
    for(i=1;i<=pro;i++){
        if(i%n1==0 && i%n2==0 && i%n3==0){
            lcm=i;
            break;
        }
    }
    for(i=2;i<=pro;i++){
        if(n1%i==0 && n2%i==0 && n3%i==0){
            hcf=i;
            break;
        }
    }
    cout<<"LCM is: "<<lcm<<endl;
    cout<<"HCF is: "<<hcf<<endl;
}
