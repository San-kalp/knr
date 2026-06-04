#include<stdio.h>

// We used int for c because c might contain EOF
int main(void) {
    int c ;
    while((c=getchar())!=EOF) {
        putchar(c);
        printf("\n");

    }
}