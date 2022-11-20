// https://codeforces.com/problemset/problem/734/A
#include <stdio.h>
 
int main(){
    
    int n, ant = 0, dan = 0;
    scanf("%d", &n);

    char s[n+1];
    scanf("%s", &s);

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A') ant++;
        else dan++;
    }
    if(ant > dan) printf("Anton");
    else if(dan > ant) printf("Danik");
    else printf("Friendship");
  
}
