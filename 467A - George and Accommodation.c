// https://codeforces.com/problemset/problem/467/A
#include <stdio.h>
 
int main() {
 
    int n, count = 0;
    scanf("%d", &n);

    while(n--) {
        int a, b;
        scanf("%d%d", &a, &b);
        if(b - a >= 2) {
            count++;
        }
    }

    printf("%d", count);
 
}
