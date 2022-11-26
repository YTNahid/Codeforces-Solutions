// https://codeforces.com/problemset/problem/581/A
#include <stdio.h>
#include <string.h>
 
int main() {
 
    int a, b, swap;
    scanf("%d%d", &a, &b);

    if(a > b) {
        swap = a;
        a = b;
        b = swap;
    }

    printf("%d %d", a, (b-a)/2);
         
}
