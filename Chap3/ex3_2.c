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

int main(){
    

    printf("%c", 1 << 7);


    return 0;
}