#include <stdio.h>
int cnt[26];
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    for(int i=0;str[i];i++){

     if(str[i]>=65 && str[i]<=90){
           cnt[str[i]-65]++;
        }
         if(str[i]>=97 && str[i]<=122){
           cnt[str[i]-97]++;
        }
}
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                 printf("%c = %d\n",i+97,cnt[i]);
            }
        }


    return 0;
}
