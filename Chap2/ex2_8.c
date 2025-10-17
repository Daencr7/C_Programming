#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")


int rightrot(unsigned x, int n){
    return (x >> n) | ((~(~0 << n)) & x) << 32-n;
}

int main(){
    

    printf("%c", 1 << 7);


    return 0;
}