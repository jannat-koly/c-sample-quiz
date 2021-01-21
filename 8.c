/**
 * What is the output of this program?
**/

#include <stdio.h>

int main() {
    int w, x = 10, y = 15, z = 5;

    w = x < y < z;
    
    printf("%d\n", w);

    return 0;
}