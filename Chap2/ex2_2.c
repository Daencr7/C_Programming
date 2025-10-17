#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int s[1000]={};
    int lim = 5;
    int i,c ;
    // for(i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++){
    //     s[i] = c;
    // }

    for(i = 0; i < lim - 1; i++){
        c = getchar();
        if(c == '\n' || c == EOF) break;
    }
    return 0;
}