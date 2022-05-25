#include <bits/stdc++.h>
using namespace std;

int getClosest(int, int, int);

int findClosest(int arr[], int n, int target)
{

    if (target <= arr[0])
        return arr[0];
    //if (target >= arr[n - 1])
        //return arr[n - 1];
        //return -1;
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;

        if (arr[mid] == target){
                printf("-1");
            //return arr[mid];
            j = mid;
        }

        else {
            if (mid < n - 1 && target < arr[mid + 1])
            return getClosest(arr[mid],arr[mid + 1], target);
            i = mid + 1;
        }
    }


    return arr[mid];
}

int getClosest(int val1, int val2,
               int target)
{
    if (target - val1 >= val2 - target)
        return val2;
       // else if(target - val1 == val2 - target)
            //return -1;
    else
        return val1;
}


int main()
{
    int i,n;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    //int n = sizeof (arr)/ sizeof(arr[0]);
    int target;
    scanf("%d",&target);
    cout << (findClosest(arr, n, target));

}
