#include <stdio.h>

int main(){
    int c, nl, space = 0, tabs = 0;
    nl = 0;
    while((c = getchar()) != EOF){
        if(c == '\n') ++nl;
        if(c == ' ') ++space;
        if(c == '\t') ++tabs;
    }
    printf("%d %d %d\n", nl, space, tabs);
    return 0;
}