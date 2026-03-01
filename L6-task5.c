#include <stdio.h>
int main(){
    int count=0;
    float temp;
    float sum=0,avg=0; 
    printf("Enter the temperature value:");
    scanf("%f",&temp);
    while (temp!=-999)
    {
        sum= sum + temp;
        count= count +1;
        printf("Enter the temperature value:");
        scanf("%f",&temp);
    }
    if(count!=0){
        avg = sum / count;
    }
    printf("Your average is %.2f",avg);
    return 0;
}