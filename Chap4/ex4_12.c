#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define ll long long
#define el printf("\n")

char restr(int n){
    if(n == 0) return '0';
    else if(n == 1) return '1';
    else if(n == 2) return '2';
    else if(n == 3) return '3';
    else if(n == 4) return '4';
    else if(n == 5) return '5';
    else if(n == 6) return '6';
    else if(n == 7) return '7';
    else if(n == 8) return '8';
    if(n == 9) return '9';
    return -1;
}

char s[]=" ";
int i = 0;
int printd(int n)
{
    if(n == 0){
        return 0;
        s[i] = '\0';
    } 
    s[i++]=restr(n%10);
    return printd(n/10);
    // n = n/10;
}
int main(){
    printd(123);
    // s[i++] = '1';
    // s[i++] = '2';
    // s[i] = '\0';
    // (*s) = '\0';
    printf("%s", s);
    return 0;
    
}