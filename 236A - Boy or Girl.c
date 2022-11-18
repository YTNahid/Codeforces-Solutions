//
#include <stdio.h>
#include <string.h>
 
int main(){
 
 
 
    char s[1000];
    gets(s);
    
    int len, i, j, count = 0;
 
    len = strlen(s);
 
    for(i = 0; i < len-1; i++) {
    	for(j = len-1; j > i; j--) {
    		if(s[i] == s[len+i-j]) {
    			count++;
    			break;
    		}
    	}
    }
    
    len -= count;
 
    if(len%2 == 0) {
    	printf("CHAT WITH HER!");
    } else printf("IGNORE HIM!");
 
}
