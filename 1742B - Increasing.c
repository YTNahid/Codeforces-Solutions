// https://codeforces.com/problemset/problem/1742/A
#include <stdio.h>
 
int main() {

    int n;
    scanf("%d", &n);

    while(n--) {
        int b, count = 0;
        scanf("%d", &b);
        int a[b], i, j;

        for(i = 0; i < b; i++) {
            scanf("%d", &a[i]);
        }

        for(i = 0; i < b; i++) {
            for(j = 1; j < b-i;j++) {
                if(a[i] == a[j+i]) {
                    count = 1;
                    break;
                }
            }
        }

        if(count) printf("NO\n");
        else printf("YES\n");
    }
         
}
