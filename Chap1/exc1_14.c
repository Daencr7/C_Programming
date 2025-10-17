#include <stdio.h>

int main(){
    // int c, nl, space = 0, tabs = 0;
    // nl = 0;
    // char x = EOF;
    int cnt = 0;
    int c;
    int arr[256] = {};
    while((c = getchar()) != EOF){
        if( c == '\t' || c == ' ' || c == '\n'){
            // ++arr[cnt];
            // cnt = 0;
        }
        else arr[c]++;
    }
    for(int i = 0; i <256; i++){
        if(arr[i] != 0) printf("%c-%d\n",i,arr[i]);
    }
    // printf("%d %d %d\n", nl, space, tabs);
    return 0;
}