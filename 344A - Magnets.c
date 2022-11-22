// https://codeforces.com/problemset/problem/344/A
#include <stdio.h>
#include <string.h>

 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif
    int n, i, count = 1;
    scanf("%d", &n);
    char s[n][3];

    for(i = 0; i < n; i++) {
        scanf("%s", &s[i]);
    }

    for(i = 0; i < n-1; i++) {
        if(s[i][1] == s[i+1][0]) {
            count++;
        }
    }
    printf("%d", count);
    
}
