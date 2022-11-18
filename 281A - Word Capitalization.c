// https://codeforces.com/problemset/problem/281/A
#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    gets(s);
    

    if(s[0] > 92) {
    	s[0] -= 32;
    }

    printf("%s", s);

}
