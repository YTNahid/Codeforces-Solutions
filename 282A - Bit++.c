// https://codeforces.com/problemset/problem/282/A
#include <stdio.h>
#include <string.h>

int main() {
 
    int n, x = 0, i;
    scanf("%d", &n);

    while(n--) {
        char s[4];
        scanf("%s", &s);
        if(s[1] == '+') {
            x++;
        } else if (s[1] == '-') {
            x--;
        }
    }

    printf("%d", x);

}
