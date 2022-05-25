#include <stdio.h>


const int MAXN = 1e5 + 3;

int points[MAXN];

int main()
{


    int p;
    scanf("%d", &p);

    for(int tc = 1; tc <= p; ++tc) {
        int n, q;
        scanf("%d %d", &n, &q);

        for(int i = 0; i < n; ++i)
            scanf("%d", points+i);

        printf("Case %d:\n", tc);
        int a, b;

        while(q--) {
            scanf("%d %d", &a, &b);

            int* s = lower_bound(points, points+n, a);
            int* p = upper_bound(points, points+n, b);

            printf("%d\n", p-s);
        }
    }

    return 0;
}
