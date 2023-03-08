// Task : WAP to convert binary number into decimal number and vice versa

#include <stdio.h>
#include <math.h>

int main() {
    int de, i=0;
    int opt;
    
    // asking for option
    printf("1 : binary to decimal\n2 : decimal to binary\nchoose option [1/2] : ");
    option:
        scanf("%d", &opt);
    
    if(opt==1){
        // converting from binary to decimal
        
        int bi;
        
        // taking a binary number input
        printf("enter a binary number : ");
        scanf("%d", &bi);
        
        while(bi){
            de += bi%10*pow(2,i);
            bi /= 10;
            i++;
        }
        
        printf("number in decimal : %d", de);
    }
    else if(opt==2){
        // converting form decimal to binary
        
        char s[100];    // s simply means a string
        
        // taking a decimal number input
        printf("enter a decimal number : ");
        scanf("%d", &de);
        
        while(de){
            if(de%2==0){
                s[i] = '0';
            }
            else{
                s[i] = '1';
            }
            i++;
            de /= 2;
        }
        
        char bi[100];       // bi is the binary number
        int temp = i;       // temp is taken just to know the length of the number
        
        for(i=0;i<temp;i++){
            bi[i] = s[temp-i-1];
        }
        bi[temp] = '\0';
        
        printf("number in binary : %s", bi);
    }
    else{
        // asking for option if option not valid
        printf("please choose option among [1/2] : ");
        goto option;
    }
    
    return 0;
}
