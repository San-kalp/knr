#include<stdio.h>

int main(void){
    int ch; // Because there is a chance that ch will hold end of line. 
    int blanks = 0; // This is very important for you to initialize otherwise a garbage value will be given instead. 
    while((ch=getchar())!=EOF){
        if (ch==' '){
            ++blanks;
        }
    }
    printf("Number of blanks : %d\n", blanks);
    return (0);
}