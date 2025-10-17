#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

void lower(char s[]){
    for(int i = 0; s[i]; i++){
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + ('a' - 'A') : s[i];
    }
}

int main(){
    

    printf("%c", 1 << 7);


    return 0;
}