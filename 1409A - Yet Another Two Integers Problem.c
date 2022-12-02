// https://codeforces.com/problemset/problem/1409/A
#include <stdio.h>
#include <math.h>

int main() {
    
    int n;
    scanf("%d", &n);

    while(n--) {
        long a, b, x, count = 0;
        scanf("%ld%ld", &a, &b);
        x = abs(a-b);

        if(x%10 == 0) {
            count = x / 10;
        } else count = (x/10) + 1;

        printf("%d\n", count);
    }

}
