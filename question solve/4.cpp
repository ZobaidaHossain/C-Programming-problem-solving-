#include<iostream>
using namespace std;
int main()
{
    float age,batting,catching,height,bowling,ch;
    cout<<"enter the number which qualification do you want to know";
    cout<<"\n 1:batsman";
    cout<<"\n 2:bowler";
    cout<<"\n 3:wicketkeeper";
    cout<<"\n enter your choice: ";
    cin>>ch;
    if(ch==1){
        cout<<"enter the age :";
        cin>>age;
        cout<<"enter the batting average: ";
        cin>>batting;
        cout<<"enter the catching reliability: ";
        cin>>catching;
        if((age>=25 && age<=40 && batting>=40 && catching>=70)||batting>=50){
            cout<<"He is qualified as a batsman in a cricket team";
        }
        else{
            cout<<"He is not qualified as a batsman in a cricket team";
        }

    }
    else if(ch==2){
        cout<<"enter the age: ";
        cin>>age;
        cout<<"enter the height: ";
        cin>>height;
        cout<<"enter the bowling average: ";
        cin>>bowling;
        if((age>=20 && age<=35 && height>=5.75 && bowling<=30)|| bowling<=25){
            cout<<"He is qualified as a bowler in a cricket team";
        }
        else{
            cout<<"He is not qualified as a bowler in a cricket team";
        }
    }
    else if(ch==3){
        cout<<"enter the age: ";
        cin>>age;
        cout<<"enter the batting average: ";
        cin>>batting;
        cout<<"enter the catching reliability: ";
        cin>>catching;
        if(age>=25 && age<=35 && batting>=20 && catching>=80){
            cout<<"He is qualified as a wicketkeeper in a cricket team";
        }
        else{
            cout<<"He is not qualified as a wicketkeeper in a cricket team";
        }
    }

}
