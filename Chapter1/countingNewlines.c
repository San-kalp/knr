#include<stdio.h>


int main(void){
    int newlines=0;
    int ch;

    while((ch=getchar())!=EOF){
        if (ch == '\n') {
            printf("Newline character detected !! \n");
            ++newlines;
        }
    }

    printf("Number of newlines are %d\n",newlines);
}