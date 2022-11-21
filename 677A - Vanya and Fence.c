// https://codeforces.com/problemset/problem/677/A
#include <stdio.h>

int main() {
    
    int a, h, i, sum = 0;
    scanf("%d %d", &a, &h);

    int arr[a];
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < a; i++) {
        if(arr[i] > h) {
            arr[i] = 2;
        } else {
            arr[i] = 1;
        }
        sum += arr[i];
    }
    printf("%d", sum);
}
