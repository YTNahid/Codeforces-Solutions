// https://codeforces.com/problemset/problem/266/A
#include <stdio.h>
#include <string.h>
 
int main(){
   
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", &s);
    
    int i, j, count = 0;
 
    for (i = 0; i < n; i++) {
        if(s[i] == s[i+1]) {
            count++;
        } 
    }
 
    if(count == 0) printf("%d", count);
    else printf("%d", count);
}
