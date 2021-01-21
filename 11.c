/**
 * What is the output of this program?
**/

#include <stdio.h>

int main() {
    int x, y, z, w;
    int i = 4, j = -1, k = 0;

    x = i && j && k;
    y = i || j && k;
    z = i && j || k;
    w = i || j || k;

    printf("%d, %d, %d, %d\n", x, y, z, w);

    return 0;
}