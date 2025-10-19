#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#define ll long long
#define el printf("\n")
int getsize(int n){
    int cnt = 0;
    while (n)
    {
        n /= 10;
        cnt++;
    }
    return cnt;
    
}

float atoff(char s[]){
    int i = 0;
    bool flag = true;
    int ch_num = 0, ch_tp = 0, ch_mu = 0;
    for(; (s[i]!='E'&&s[i]!='e') && s[i]; i++){
        if(s[i]=='.') flag = false, ++i;
        if(flag){
            ch_num = ch_num*10 + (s[i]-'0');
        } 
        else{
            // printf("%c ", s[i]);
            ch_tp = ch_tp*10 + (s[i] - '0');
        }
    }
    int sig = 1;
    i++;
    for(;s[i];i++){
        if(s[i]=='-'){
            sig = -1;
            continue;
        }
        ch_mu = ch_mu*10 + s[i]-'0';
    }
    ch_mu = ch_mu * sig;
    // return (float)ch_mu * sig;
    // return (float)ch_num;
    return ((float)ch_num +(float)ch_tp*pow(10,-getsize(ch_tp)))*pow(10,ch_mu) ;
    
    // return -1;
}


int main(){
    
    // printf("%d\n",'e');
    printf("%.8f\n", atoff("123.45e-6"));
    return 0;
}