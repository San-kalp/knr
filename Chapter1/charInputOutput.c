#include <stdio.h>

int main(void){
    printf("Please enter the character - ");
    char c= getchar();
    putchar(c);
    printf("\n");
    printf("------\n");
    putchar(100); // This is going to output d
}

