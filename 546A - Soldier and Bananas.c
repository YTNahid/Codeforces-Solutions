// https://codeforces.com/problemset/problem/546/A
#include <stdio.h>
 
int main(){
 
    int a, b, c, price = 0;
    scanf("%d%d%d", &a, &b ,&c);
 
    for(int i = 1; i <= c ; i++) {
        price += (a*i);
    }
    price = price - b;
    if(price < 0) {
        printf("0");
    } else {
        printf("%d", price);
    }
}
