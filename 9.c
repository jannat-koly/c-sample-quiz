/**
 * What is the output of this program?
**/

#include <stdio.h>
#include <math.h>

int main() {
    float num = 1.54;
    
    printf("%d, %d, %d\n", (int)round(num), (int)ceil(num), (int)floor(num));

    return 0;
}