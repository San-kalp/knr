#include<stdio.h>

int main(void) {
    int c, newlines;
    newlines = 0;
    while((c=getchar())!=EOF) {
        if (c=='\n'){
            ++newlines;
        }
    }
    printf("Number of lines are %d\n",newlines);

}