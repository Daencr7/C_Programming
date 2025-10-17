// Exercise 3-6. Write a version of itoa that accepts three arguments instead of two. The third argument is
// a minimum field width; the converted number must be padded with blanks on the left if necessary to
// make it wide enough.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

void itoa(int n, char s[], int width) {
    int i = 0, sign;
    if ((sign = n) < 0) {
        n = -n;
    }
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    while (i < width) {
        s[i++] = ' ';
    }
    s[i] = '\0';
    // Reverse the string
    for (int j = 0; j < i / 2; j++) {
        char temp = s[j];
        s[j] = s[i - j - 1];
        s[i - j - 1] = temp;
    }
}


int main(){
    

    // // printf("%c", 1 << 7);
    // char s1[] = "a-d0-3x-z";
    // char s2[100];
    // expand(s1, s2);
    // printf("%s\n", s2);
    return 0;
}