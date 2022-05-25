#include<cstdio>
#include<iostream>

using namespace std;
int main()
{
    int seconds,hours,minutes;
    cin>>seconds;
    hours=seconds/3600;
    cout<<seconds<<"seconds is equivalent to " <<int(hours)<<" hours "<<seconds%(hours*60)<<" minutes "<<(seconds%(hours*3600))-((seconds%(hours*60))*60)<<" seconds";
    int s,h,m,rs;
    cin>>s;
    int secondsInHour=60*60;
    int secondsInMinute=60;
    h=s/secondsInHour;
    rs=s-(h*secondsInHour);
    m=rs/secondsInMinute;
    rs=rs-(m*secondsInMinute);
    s=rs;
    printf("%d hour,%d minutes and %d seconds",h,m,s);
}
