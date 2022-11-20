// https://codeforces.com/problemset/problem/110/A
#include <stdio.h>
 
int main(){

    int remainder = 0, i, count = 0;
    long long a;
    scanf("%lld", &a);

    for(i = 0; i < a; i++) {
        while (a > 9) {
            remainder = a % 10;
            a = (a-remainder)/10;
            if(remainder == 4 || remainder == 7) {
                count++;
            }        

        }
    }
    if(a == 4 || a == 7) {
        count++;
    }
   
    if(count == 4 || count == 7) printf("YES");
    else printf("NO");
  
}
