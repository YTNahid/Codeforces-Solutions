// https://codeforces.com/problemset/problem/158/A
#include <stdio.h>
 
int main(){

    int a, b, count = 0, i;
    scanf("%d%d", &a, &b);

    int arr[a];
    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < a; i++) {
        if(arr[i] >= arr[b-1] && arr[i] > 0) {
            count++;
        }
    }
    printf("%d", count);
  
}
