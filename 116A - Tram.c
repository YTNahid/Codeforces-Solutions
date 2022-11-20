// https://codeforces.com/problemset/problem/116/A
#include <stdio.h>
 
int main(){
    
    int n, max = 0, in = 0;
    scanf("%d", &n);

    while(n--) {
        int a, b;
        scanf("%d%d", &a, &b);

        in = in + b - a;
        if(in > max) {
            max = in;
        }
    }
    printf("%d", max);
  
}
