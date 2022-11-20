// https://codeforces.com/problemset/problem/617/A
#include <stdio.h>
 
int main(){
   
    int a, count = 0, i , j, remainder = 0, num = 0;
    scanf("%d", &a);

    for(i = 5; i >= 1; i--) {
        count = a / i;
        remainder = a % i;
        a = remainder;
        num += count;
    }
    printf("%d", num);
}
