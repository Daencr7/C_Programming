#include <stdio.h>

int main(){
    int c, nl, space = 0, tabs = 0;
    nl = 0;
    char x = EOF;
    while((c = getchar()) != EOF){
        if( c == '\t') printf("\\t");
        else if(c == '\b') printf("\\b");
        else if(c == '\\') printf("\\");
        else printf("%c", c);
    }
    // printf("%d %d %d\n", nl, space, tabs);
    return 0;
}