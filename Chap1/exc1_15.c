#include <stdio.h>

float conver_tem_to_farh(int celsius){
    return celsius*(9.0/5.0) + 32.0;
}

int main(){

    printf("%.2f", conver_tem_to_farh(50));
    return 0;
}