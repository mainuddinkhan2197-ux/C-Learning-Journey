#include<stdio.h>
// Write a C program to calculate area of a rectangle:
// a. USING HARD CODED INPUTS.
// b. USING INPUTS SUPPLIED BY THE USER. 
int main() {
    int length, breadth;

    printf("Enter length\n");
    scanf("%d", &length);   // <-- FIXED HERE

    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);
    return 0;
}
