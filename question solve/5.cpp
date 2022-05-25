#include<iostream>
using namespace std;
int main(){
    int attendence,classtest,mid,finale;
    cout<<"how many class he attend: ";
    cin>>attendence;
    cout<<"\n his classtest marks: ";
    cin>>classtest;
    cout<<"\n his mid marks: ";
    cin>>mid;
    cout<<"\n his final marks: ";
    cin>>finale;
    int totalAttendence=(10*attendence)/40;
    int totalclasstest=(20*classtest)/100;
    int totalmid=(20*mid)/100;
    int totalfinal=(50*finale)/100;
    int sum=totalAttendence+totalclasstest+totalmid+totalfinal;
    cout<<"total marks out of 100: "<<sum<<endl;
    if(sum>=90)
    {
        cout<<"his result is A";
    }
    else if(sum>=80 && sum<90){
        cout<<"his result is B";
    }
     else if(sum>=70 && sum<80){
        cout<<"his result is C";
    }
     else if(sum>=60 && sum<70){
        cout<<"his result is D";
    }
     else if(sum<60){
        cout<<"his result is F";
    }
}
