// Task : WAP that calculates the Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;

    printf("Enter the principle :");
    scanf("%f", &p);
    printf("Enter the rate :");
    scanf("%f", &r);
    printf("Enter the time :");
    scanf("%f", &t);
    
    float si = (p * t * t) / 100;
    printf("simple interest :  %.2f\n", si);
    
    float ci = p * pow((1 + r / 100), t) - p;
    printf("compound interest : %.2f\n", ci);

    return 0;
}
