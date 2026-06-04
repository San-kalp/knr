#include<stdio.h>


int main(void){
    // We will take input and then provide an output. 
    // Input - Hi  my name is      Sankalp
    // Output - Hi my name is Sankalp

    int ch ; // The character will be stored.
    int blanks = 0; // To store the number of blanks 
    // First check if ch is not EOF
    while ((ch= getchar())!=EOF){
        // Here we will get one one character at a time. 
        if (ch== ' '){
            ++blanks;
        }
        if (blanks>1){
            blanks = 0;
            continue;
        }
        putchar(ch);
    }


    return (0);
}