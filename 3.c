// Task : WAP to calculate the area and circumference of a circle
#include <stdio.h>

// defining the constant
#define pi 3.14

int main() {
    int r;

    // taking r (radius) as input
    printf("radius? ");
    scanf("%d", &r);
    
    // calculating area and circumference
    float area = pi*r*r;
    float cf = 2*pi*r;
    
    // printing area and circumference
    printf("area : %.2f\ncircumeference : %.2f", area, cf);
    
    return 0;
}
