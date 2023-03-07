/* 
Task : WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
            Between 90 - 100%  ----  print 'A'
            80 - 90%           ----  print 'B'
            60 - 80%           ----  print 'C'
            Below 60%          ----  print 'D'
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    
    // inputting marks of five subjects
    printf("enter marks of 5 subjects : ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    
    // calculating percentage
    float prcntage = (float) (m1+m2+m3+m4+m5) / 5;
    
    if(prcntage>100 || prcntage<0){
        printf("invalid marks");
    }
    else if(prcntage<100 && prcntage>90){
        printf("your percentage : %.2f\nyour grade : A\n", prcntage);
    }
    else if(prcntage>80){
        printf("your percentage : %.2f\nyour grade : B\n", prcntage);
    }
    else if(prcntage>60){
        printf("your percentage : %.2f\nyour grade : C\n", prcntage);
    }
    else{
        printf("your percentage : %.2f\nyour grade : D\n", prcntage);
    }
  
    return 0;
}
