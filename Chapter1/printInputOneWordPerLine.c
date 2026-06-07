#include<stdio.h>
/*
Hi my name is Sankalp=>

Hi 
my
name
is
Sankalp

1. Need to detect the word first. 
    Loose definition of word is that it is a seq of characters, until you get tab, blank and newline.
*/

#define IN 1
#define OUT 0

int main(void) {

    int ch;
    int state =OUT; 
    while((ch=getchar())!=EOF){
        if (ch==' ' || ch=='\t' || ch=='\n') {
            if (state == IN)
                putchar('\n');
            state = OUT;
            continue;
        }
        if (state == OUT){
            state = IN;
        }
        putchar(ch);
    }

    return 0;
}