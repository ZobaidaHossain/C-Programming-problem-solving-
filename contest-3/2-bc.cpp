#include<iostream>

using namespace std;
int main()
{

    for(int i=1; ; i++){
        bool flag= false;
        int j=0,m[40000];
        for(j=0; ;j++){
                int num;
            cin>>num;
            if(num == -1){
                if(j==0)
                    flag=true;
                break;
            }
            m[j]=num;
        }
        if(flag == true)
            break;
        if(i > 1)
            printf("\n");
        int k=0,l=0;
        int len[j];
        for(k=0;k<j;k++)
            len[k]=1;
            for(k=0;k<j-1;k++){
                for(l=k+1;l<j;l++){
                    if(m[k]>=m[l]){
                        if(len[k]+1>len[l]){
                            len[l]=len[k]+1;
                        }
                    }
                }
            }
            cout<<"Test #"<<i<<":\n";
            int maxi=len[0];
            for(k=1;k<j;k++)
                if(maxi<len[k])
                maxi=len[k];

            cout<<"  maximum possible interceptions: "<<maxi<<endl;

    }
    return 0;
}
