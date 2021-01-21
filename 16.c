/**
 * What is the output of this program?
**/

#include <stdio.h>

int function() {
    static int num = -1;

    printf("%d ", num);
    
    return ++num;
}

int main() {

    int x = -1, y = 1;

    x && function() && --y;

    ++x && y && function();

    x || function() || y++;

    y-- || !function() || x++;

    printf("%d %d\n", x, y);

    return 0;
}