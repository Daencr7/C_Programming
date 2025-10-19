#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define ll long long
#define el printf("\n")


void reverse(char s[], int n, int m){
    if(n == m/2) return;
    char tem = s[n];
    s[n] = s[m-1-n];
    s[m-1-n] = tem;

    reverse(s,n+1,m);
}
int main(){
    // printd(123);
    // s[i++] = '1';
    // s[i++] = '2';
    // s[i] = '\0';
    // (*s) = '\0';
    char s[] = "123";
    reverse(s,0,3);

    printf("%s", s);
    return 0;
    
}