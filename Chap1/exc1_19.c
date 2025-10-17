#include <stdio.h>

float conver_tem_to_farh(int celsius){
    return celsius*(9.0/5.0) + 32.0;
}

int main(){

    // printf("%.2f", conver_tem_to_farh(50));
    int c;
    char lena[1000]= " ";
    int cnt = 0;

    while((c = getchar()) != EOF){
        if(c == '\n'){
            for(int i = cnt-1; i >= 0; i--){
                printf("%c", lena[i]);
            }printf("\n");
            cnt = 0;
        }
        else lena[cnt++] = c;
    }

    return 0;
}