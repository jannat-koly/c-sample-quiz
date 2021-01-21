/**
 * What is the output of this program?
**/

#include <stdio.h>

int function() {    
    static int num = 0;
    return ++num;
}

int main() {
    int x = function();
    int y = function();
    int z = function();

    printf("%d, %d, %d\n", x, y, z);

    return 0;
}