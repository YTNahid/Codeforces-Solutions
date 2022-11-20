// https://codeforces.com/problemset/problem/59/A
#include <stdio.h>
#include <string.h>
 
int main(){
    
    char s[100];
    scanf("%s", &s);

    int len, i, up = 0, low = 0;

    len = strlen(s);    

    for(i = 0; i < len; i++) {
        if (s[i] > 92) {
            low++;
        } else {
            up++;
        }
    }

    if(up > low) {
        for(i = 0; i < len; i++) {
            if(s[i] > 92) {
                s[i] = s[i] - 32;
            }
        }
    } else {
        for(i = 0; i < len; i++) {
            if(s[i] < 92) {
                s[i] = s[i] + 32;
            }
        }
    }

    printf("%s", s);
}
