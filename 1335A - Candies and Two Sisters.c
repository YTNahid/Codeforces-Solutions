// https://codeforces.com/problemset/problem/1335/A
#include <stdio.h>
#include <string.h>
 
int main() {

    int n;
    scanf("%d", &n);

    while(n--) {
        long long a;
        scanf("%lld", &a);

        if(a > 1 && a%2 == 0) {
            printf("%d\n", (a/2)-1);
        } else if(a > 1 && a%2 != 0) {
            printf("%d\n", (a/2));
        } else printf("0\n");
    }
         
}
