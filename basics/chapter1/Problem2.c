#include <stdio.h>
// Calculate the area of circle and modify the same program to claculate the volume of cylinfer given its radius and height.
int main() {
    int r = 6;
    int height = 10;
    printf("The area of circle with radius %d is %f\n", r, 3.14*r*r);
    printf("The volume  of cylinder with radius %d and height %d is %f", r, height, 3.14*r*r*height);
    return 0;
}


