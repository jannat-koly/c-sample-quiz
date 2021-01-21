/**
 * What is the output of this program?
**/

#include <stdio.h>

int main() {
    int x = 3, y = 2, z = 0, w;

    w = (++x && --z) ? y++ : ++y;

    printf("%d, %d, %d, %d\n", x, y, z, w);

    return 0;
}