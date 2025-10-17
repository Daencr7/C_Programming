#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n){
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid + 1;
        else if (x > v[mid])
            low = mid + 1;
        else
        /* found match */
        return mid;
    }
    return -1;
    /* no match */
}
// x &= x - 1 sẽ xóa bit 1 bên phải x, mỗi lần chạy sẽ xóa 1 bit 1 
int main(){
    

    printf("%c", 1 << 7);


    return 0;
}