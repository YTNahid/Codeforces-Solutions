// https://codeforces.com/problemset/problem/41/A
#include <stdio.h>
#include <string.h>

int main() {

    char a[1000], b[1000];

    scanf("%s%s", &a, &b);

    int len, i, j, x = 0;

    len = strlen(a);

    for(i = 0; i < len; i++) {
        if(a[i] != b[len - i - 1]) {
            x = 1;
        }
    }

    if(x) printf("NO");
    else printf("YES");

}
