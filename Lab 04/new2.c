#include <stdio.h>
int main(){
    float dataused;
    printf("ENTER YOUR TOTAL GB USED:\n");
    scanf("%f", &dataused);
    if(dataused<=50){
        printf("Basic User\n");
    }
    else if (dataused>51 && dataused<150){
        printf("Standard User");
    }
    else{
        printf("Heavy User");
    }
    return 0;
}