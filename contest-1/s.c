 #include <stdio.h>

int main() {
    int Y, P, L[100000];
    int i;
    while(scanf("%d", &Y) == 1) {
        scanf("%d", &P);
        for(i = 0; i < P; i++)
            scanf("%d", &L[i]);
        int r = 0,MX = -1, al, ar;
        for(i = 0; i < P; i++) {
            while(r < P && L[r] <= L[i]+Y-1)
                r++;
            if(r-i > MX) {
                MX = r-i;
                al = L[i], ar = L[r-1];
            }
        }
        printf("%d %d %d\n", MX, al, ar);
    }
    return 0;
}
