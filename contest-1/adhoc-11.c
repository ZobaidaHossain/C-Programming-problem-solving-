#include <stdio.h>

int main()
{
    int n,k,i,j,arr[50000],t,s,e,flag,mid,left,right;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    scanf("%d",&arr[i]);
    scanf("%d",&t);

    for(j=0;j<t;j++)
    {
        scanf("%d",&k);
        s=0;
        e=n-1;
        flag=0;

       while(s<=e)
       {
           mid=(s+e)/2;

           if(arr[mid]==k)
           {
               for(i=mid-1;i>=0;i--)
               {
                   if(arr[mid]==arr[i])
                        continue;

                   else {
                       left=arr[i];
                       break;
                   }
                }

                for(i=mid+1;i<n;i++)
                {
                    if(arr[mid]==arr[i])
                        continue;

                    else {
                        right=arr[i];
                        break;
                     }
                 }
                 flag=1;
                 break;
             }

             else if(arr[mid]>k)
                e=mid-1;

             else s=mid+1;
         }

         if(flag)
         {
             if(arr[mid]==arr[0]&&arr[mid]==arr[n-1])
              printf("X X\n");
             else if(arr[mid]==arr[0])
              printf("X %d\n",right);
             else if(arr[mid]==arr[n-1])
              printf("%d X\n",left);
             else printf("%d %d\n",left,right);
          }

          else
          {
              if(k<arr[0])
                printf("X %d\n",arr[0]);
              else if(k>arr[n-1])
                printf("%d X\n",arr[n-1]);
              else
                printf("%d %d\n",arr[e],arr[s]);
          }
       }

    return 0;
}
