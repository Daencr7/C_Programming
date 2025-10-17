#include <stdio.h>

int main(){

    int c = -1;
    // c = getchar();
    while ((c = getchar()) != EOF)
    {
        printf("TRUE");
        break;
        // putchar(c);
        // printf("%c", c);
        // c = getchar();
    }
    
    return 0;
}