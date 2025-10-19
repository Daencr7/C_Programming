#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define ll long long
#define el printf("\n")
#define SWAP(t,x,y) { \
    if(strcmp(t,"int")==0) {\
        int tem = x;\
        x = y;\
        y = tem;\
    }\
    if(strcmp(t,"char")==0) {\
        char tem = x;\
        x = y;\
        y = tem;\
    }\
}\


int main(){

    char x = '3', y = '4';
    printf("%c %c\n", x, y);
    
    SWAP("char",x,y);

    printf("%c %c", x, y);
    return 0;
    
}