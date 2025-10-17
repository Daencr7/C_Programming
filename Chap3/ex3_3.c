#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

void expand(char s1[], char s2[]){
    for(int i = 0; s1[i]; i++){
        if(s1[i]=='-' && i > 0){
            if(s1[i-1] && s1[i+1]){
                for(char c = s1[i-1]+1; c < s1[i+1]; c++){
                    *s2++ = c;
                }
            }
        }
        else{
            *s2++ = s1[i];
        }
    }
    *s2 = '\0';
}

int main(){
    

    // printf("%c", 1 << 7);
    char s1[] = "a-d0-3x-z";
    char s2[100];
    expand(s1, s2);
    printf("%s\n", s2);
    return 0;
}