// https://codeforces.com/problemset/problem/263/A
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
  int a[5][5], i, j, x, y;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(a[i][j] == 1) {
                x = 2 - i;
                y = 2 - j;
            }
        }   
     }
     x = abs(x);
     y = abs (y);
    printf("%d", x+y);
}
