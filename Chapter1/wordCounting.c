#include<stdio.h>

#define IN 1 
#define OUT 0 


int main(void) {

    int c, nl, nw, nc, state;
    state = OUT; // Becasue it is outside of any word as of now. 
    nl= nw= nc = 0;
    while((c=getchar())!= EOF){
        ++nc;
        if(c=='\n') {
            ++nl;
        }

        if (c==' ' || c== '\n' || c=='\t') {
            state = OUT;
        }
        else if (state == OUT){
            ++nw;
            state = IN;
        }
    }
    printf("lines: %d\n", nl);
    printf("words: %d\n", nw);
    printf("chars: %d\n", nc);
    return 0;
}