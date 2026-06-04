#include<stdio.h>

int main(void){
    int ch;
    int blanks =0;

    while((ch= getchar())!=EOF){
        if (ch==' ') {
            ++blanks;
            if (blanks==1){
                putchar(ch);
            }
        }
        else if(ch!='\t'){
            putchar(ch);
            blanks=0; // resetting when a non blank is seen. 
        }
    }



    return 0;
}