#include <stdio.h>

int main(){
    int c, nl, space = 0, tabs = 0;
    nl = 0;
    char x = EOF;
    while((c = getchar()) != EOF){
        // printf("%c", c);
        if( c != x ){
            x = c;
            printf("%c", c);
        }
        if(c == ' ' && x == ' '){
            continue;
        }
        // if(c == '\n') ++nl;
        // if(c == ' ') ++space;
        // if(c == '\t') ++tabs;
    }
    // printf("%d %d %d\n", nl, space, tabs);
    return 0;
}