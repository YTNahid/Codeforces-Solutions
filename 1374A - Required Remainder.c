// https://codeforces.com/problemset/problem/1374/A
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    while(n--) {
        long a, b, c, x = 0;

        scanf("%ld%ld%ld", &a, &b, &c);

        x = c - (c-b)%a;

        printf("%d\n", x);
    }

}
