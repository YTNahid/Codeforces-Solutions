// https://codeforces.com/problemset/problem/148/A
#include <stdio.h>

int main() {
  
    int arr[4], i, j, a, count = 0;

    for(i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &a);

    int total[a];

    for(i = 1; i <= a; i++) {
        for(j = 0; j < 4; j++) {
            if(i%arr[j] == 0) {
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);

}
