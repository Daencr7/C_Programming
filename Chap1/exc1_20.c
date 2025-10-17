#include <stdio.h>

float conver_tem_to_farh(int celsius){
    return celsius*(9.0/5.0) + 32.0;
}

int main(){

    // printf("%.2f", conver_tem_to_farh(50));
    int c;
    // char lena[1000]= " ";
    
    // int cnt = 0;
    // char pre = ' ';
    int cnt = 0;
    while((c = getchar()) != EOF){
        if(c != '\t'){
            ++cnt;
            printf("%c", c);
        }
        else{
            for(int i = 0; i < 8 - cnt; i++){
                printf(" ");
            }
                
            cnt = 0;
        }
    }

    return 0;
}