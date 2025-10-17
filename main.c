#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")


void escape(char s[], char t[]){
    int cnt = 0;
    while (t[cnt] != '\0')
    {
        switch (t[cnt])
        {
        case '\n':
            s[cnt] = '\\n';
            break;
        case '\t':
            s[cnt] = '\\t';
            break;
        default:
            s[cnt] = t[cnt];
            break;
        }
        cnt++;
    }
    s[cnt] = '\0';
    
}

void itoa(int n, char s[])
{
    int i, sign;
    if ((sign = n) < 0)
        n = -n;
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
    

    printf("%c", 1 << 7);


    return 0;
}