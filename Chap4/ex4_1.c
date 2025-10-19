#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

int strindex(char s[], char t[]){
    // int res = -1;
    int i = 0, j = 0;
    for(;s[i];i++);
    for(;t[j];j++);
    --i;--j;
    for(;i > j - 1; i--){
        int m = j;
        int n = i;
        while(s[n--] == t[m--]){
            if(m < 0) return i;
        }
    }
    return -1;
}


int main(){
    

    char s1[] = "asda12sdd21";
    char s2[] = "123";
    // strindex(s1, s2);
    printf("%d\n", strindex(s1, s2));
    return 0;
}