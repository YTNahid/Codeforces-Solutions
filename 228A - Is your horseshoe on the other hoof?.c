// https://codeforces.com/problemset/problem/228/A
#include <stdio.h>
#include <string.h>
 
int main() {
 
    long arr[4],i,j, count = 0;

    for(i = 0; i < 4; i++) {
        scanf("%ld", &arr[i]);
    }

    for(i = 0; i < 3; i++) {
        for(j = 3; j >= 1+i; j--) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -j-i;
            }
        }
    }
    printf("%d", count);
         
}
