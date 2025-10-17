#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

void itoa(int n, char s[]) {
    int i;
    unsigned sign;

    if ((sign = n) < 0)
        n = -n;        // <── Lỗi xảy ra ở đây
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}


int main(){
    

    // // printf("%c", 1 << 7);
    // char s1[] = "a-d0-3x-z";
    // char s2[100];
    // expand(s1, s2);
    // printf("%s\n", s2);
    return 0;
}