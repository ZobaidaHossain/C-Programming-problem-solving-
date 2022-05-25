#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,temp=0,n;
    cout<<"enter the number: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the given numbers: ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"ascending order:\n";
    for(i=0;i<n;i++){
        cout<<a[i];
        cout<<"\n";
    }
    cout<<"descending order: \n";
    for(i=n-1;i>=0;i--){
        cout<<a[i];
        cout<<"\n";
    }
}
