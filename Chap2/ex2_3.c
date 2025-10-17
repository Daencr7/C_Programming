#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
int conC_N(char x){
    switch (x)
    {
    case 'A':
        return 10;
        break;
    case 'B':
        return 11;
        break;
    case 'C':
        return 12;
        break;
    case 'D':
        return 13;
        break;
    case 'E':
        return 14;
        break;
    case 'F':
        return 15;
        break;
    default:
        return x - '0';
        break;
    }
}

ll conv_htoi(char s[]){
    int cnt = 0;
    while (s[cnt] != '\0'){
        cnt++;
    }
    ll deci = 0;
    --cnt;
    for(int i = cnt; i >= 0; i--){
        if(s[i] == 'X' || s[i] == 'x') return deci;
        // printf("%d ", i);
        deci += (conC_N(s[i]))*((int)pow(16,cnt - i));
        // deci += (int)pow(16,cnt - i);
        // deci = (int)pow(2,2-cnt);
        
    }
    
    return deci;
}

int main(){

    printf("%lld", conv_htoi("AB"));

    return 0;
}