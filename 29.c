// Task : Define a structure data type TRAIN_INFO

#include <stdio.h>
#include <string.h>

typedef struct
{
    int trainNum;
    char trainName[100];
    char endStation[100];
} TRAIN_INFO;

int main(){
    
    TRAIN_INFO t1;

    t1.trainNum = 12345;
    strcpy(t1.trainName, "rajdhani express");
    strcpy(t1.endStation, "delhi");

    printf("train number : %d\ntrain name : %s\ntrain end station : %s\n", t1.trainNum, t1.trainName, t1.endStation);
}
