// Exercise 3-5. Write the function itob(n,s,b) that converts the integer n into a base b character
// representation in the string s. In particular, itob(n,s,16) formats s as a hexadecimal integer in s.

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

void itoa(int n, char s[], int b) {
    int i = 0, sign;
    if ((sign = n) < 0)
        n = -n;
    
    do {
        int rem = n % b;
        s[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
    } while ((n /= b) > 0);
    
    if (sign < 0)
        s[i++] = '-';
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