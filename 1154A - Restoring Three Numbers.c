// https://codeforces.com/problemset/problem/1154/A
#include <stdio.h>

int main() {
    
    int a[4], b[3], i, j, max = 0;

    for(i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 4; i++) {
        if(a[i] > max) max = a[i];
    }

    for(i = 0; i < 4; i++) {
        if(a[i] < max) {
            a[i] = max - a[i];
            printf("%d ", a[i]);
        }
    }

}
