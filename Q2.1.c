#include <stdio.h>

int main()
{

    int i,j,count=0;
    int zobaida[100];


    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&zobaida[i]);
    }
    printf("Duplicate elements in given array: \n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(zobaida[i] == zobaida[j])
                count++;

        }
    }
    printf("%d\n", count);
    return 0;
}
