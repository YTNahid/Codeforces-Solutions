// https://codeforces.com/problemset/problem/791/A
#include <stdio.h>
 
int main(){
    
    int a, b, count = 0;
    scanf("%d%d", &a, &b);
 
    if (a == b) {
        a *= 3;
        b *= 2;
        count++;
    }
 
 
        while (a < b) {
            a *= 3;
            b *= 2;
            count++;
            if (a == b) {
                count++;
            }
        }
    
    printf("%d", count);
 
}
