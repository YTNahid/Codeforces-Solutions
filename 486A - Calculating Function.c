// https://codeforces.com/problemset/problem/486/A
#include <stdio.h>
 
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif
    
     
    long long a, f;
    scanf("%lld", &a);
    if(a%2 == 0) {
        printf("%lld", a / 2);
    } else {
        f = -(a/2 + 1);
        printf("%lld",f);
    }
}
