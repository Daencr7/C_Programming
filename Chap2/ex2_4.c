#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define ll long long
#define el printf("\n")
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
        deci += (conC_N(s[i]))*((int)pow(16,cnt - i));     
    }
    return deci;
}

void squeeze(char s1[], char s2[]){
    int flag[256] = {0};
    for(int i = 0; s2[i] != '\0'; i++){
        flag[s2[i]]++;
    }
    char s[] = "";
    int cnts1 = 0;
    int cnts = 0;
    while (s1[cnts1] != '\0')
    {
        if(flag[s1[cnts1]] == 0){
            s[cnts] = s1[cnts1];
            cnts++; 
        }    
        cnts1++;
    }
    s[cnts] = '\0';
    printf("%s", s);
}

int main(){
    squeeze("ronaldo", "messilo");

    return 0;
}