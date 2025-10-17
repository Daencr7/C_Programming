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
    // printf("%c", s2[0]);
    // for(int i = 0; i < 256; i++){
    //     if(flag[i] != 0) printf("%d", flag[i]);
    // }
    // char s[] = s1[];
    // int n = 0;
    // for(int i = 0; s1[i] != '\0'; i++){
    //     if(flag[s1[i]] != 0){
    //     }
    //     else{
    //         s[n] = s1[i];
    //         s[++n] = '\0';
    //         n++;
    //     }
    //     // return s;
    // }
    // printf("%s\n", s);
    // for(int i = 0; s[i] != '\0'; i++){
    //     printf("%c", s[i]);
    // }
    // printf("\n");
}

int any(char s1[], char s2[]){
    int res = -1;
    int flag[256] = {0};
    for(int i = 0; s2[i] != '\0'; i++){
        flag[s2[i]]++;
    }
    int cnt = 0;
    while(s1[cnt] != '\0'){
        if(flag[s1[cnt]] != 0) return cnt;
        cnt++;
    }
    return res;

}
int main(){

    // printf("%lld", conv_htoi("AB"));
    // squeeze("ronaldo", "messilo");
    printf("%d", any("ronaldo", "nessi"));
    // char ss[] = "ronaldo";
    // printf("%s", ss);

    return 0;
}