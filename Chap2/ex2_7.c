#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")

int setbits(unsigned x, int p, int n, int y){
    
    unsigned xx = (x >> (p-n+1)) & ~(~0 << n);
    x &= (~0 << y + 1) | (1 << y - n);
    return (xx << (y - n + 1)) | x;
}
// int countbit(unsigned x){
//     int cnt = 0;
//     while(x){
//         x &= x - 1;
//         cnt++;
//     }
//     return cnt;
// }
// x &= x - 1 sẽ xóa bit 1 bên phải x, mỗi lần chạy sẽ xóa 1 bit 1 
int main(){
    

    printf("%c", 1 << 7);


    return 0;
}