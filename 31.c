// Task : WAP to compare the contents of two files and determine whether they are same or not.

#include <stdio.h>
#include <stdbool.h>

int main(){
    // declaring file pointers
    FILE *file1, *file2;
    
    // opening both files
    file1 = fopen("text.txt", "r");
    file2 = fopen("text2.txt", "r");

    char ch1, ch2;

    bool areEqual = true;

    while(ch1 != EOF && ch2 != EOF){
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if(ch1!=ch2){
            areEqual = false;
            break;
        }
    }

    // closing both files
    fclose(file1);
    fclose(file2);

    // printing if both files have same or differnet contents
    if(areEqual){
        printf("both files have same content\n");
    }
    else{
        printf("both files have different content\n");
    }
}
