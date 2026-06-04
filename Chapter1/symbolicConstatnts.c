#include <stdio.h>

#define LOWER 0  // These are the symbolic name or constant. It is like saying the symbol LOWER will be associated to text 0
#define UPPER 300
#define STEP 20


int main(void){
    int fahr;
    for (fahr=LOWER;fahr<=UPPER; fahr= fahr + STEP){
        printf("%3d %6.1f\n",fahr, (5.0/9.0)*(fahr-32.0));
    }
    return (0);
}