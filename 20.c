// Task : WAP to convert binary number into decimal number and vice versa

#include <stdio.h>
#include <math.h>

int main() {
    // binary to decim/l
    int de, bi, i=0;
    scanf("%d", &bi);
    
    while(bi){
        de += bi%10*pow(2,i);
        bi /= 10;
        i++;
    }
    
    printf("%d", de);
    

    return 0;
}
