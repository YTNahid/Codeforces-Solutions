// https://codeforces.com/problemset/problem/1328/A
#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);

    while(a--) {
        long long b, c, count = 0;
        scanf("%lld%lld", &b, &c);

        if(b%c == 0) printf("0\n");
        else printf("%d\n", c-(b%c));
    }

}
