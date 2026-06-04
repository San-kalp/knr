#include<stdio.h>


int main(void){
    int tabs=0;
    int ch;

    while((ch=getchar())!=EOF) {
        if (ch == '\t') {
            ++tabs;
        }
    }
    printf("Number of tabs are %d\n",tabs);
}