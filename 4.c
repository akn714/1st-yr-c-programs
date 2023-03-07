// Task : WAP that accepts the temperature in Centigrade and converts in Fahrenheit and vise versa using the formula c / 5 = (f-32) / 9

#include <stdio.h>

int main() {
    float c, f;
    int opt;
    printf("1 : centigrade to fahrenheit\n2 : fahrenheit to centigrade\n");
    
    // invalidOpt is a label
    invalidOpt:
        printf("choose an option [1/2] : ");
        scanf("%d", &opt);
    
    switch(opt){
        case 1:
            printf("enter centigrade temprature : ");
            scanf("%f", &c);
            f = (c*9)/5 + 32;
            printf("temprature in fahrenheit : %.2f\n", f);
            break;
        case 2:
            printf("enter fahrenheit temprature : ");
            scanf("%f", &f);
            c = (f - 32)*5.0/9;
            printf("temprature in centigrade : %.2f\n", c);
            break;
        default:
            // taking the input again if the option (opt) is invalid
            goto invalidOpt;
    }

    return 0;
}
