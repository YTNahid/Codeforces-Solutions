// https://codeforces.com/problemset/problem/158/A
#include <stdio.h>
 
int main(){
    
    int a, b, count = 0, i, zero = 0;
    scanf("%d%d", &a, &b);

    int arr[a];
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = b-1; i >= 0; i--) {
        if(arr[i] != 0) {
            count++;
        }
    }
    if(arr[b-1] > 0) {
        for(i = 0; i < a - b; i++) {
            if(arr[b-1] == arr[b+i]) {
            count++;
            }
        }
    }
    printf("%d\n", count);
  
}
