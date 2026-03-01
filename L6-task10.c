#include <stdio.h>
int main(){
    int score;
    int distinction=0, pass=0, fail=0;

    printf("Enter student score (-1 to stop): ");
    scanf("%d",&score);

    while(score != -1){
        if(score >= 75 && score <= 100){
            distinction=distinction+1;
        }
        else if(score >= 50 && score <= 74){
            pass=pass+1;
        }
        else if(score >= 0 && score < 50){
            fail=fail+1;
        }
        else{
            printf("Invalid score\n");
        }
        printf("Enter student score (-1 to stop): ");
        scanf("%d",&score);
    }

    printf("Distinction: %d\n", distinction);
    printf("Pass: %d\n", pass);
    printf("Fail: %d\n", fail);

    return 0;
}