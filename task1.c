#include <stdio.h>
int main(){
    int score;
    int discount = 0;
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your fitness score:");
    scanf("%d", &score);
    if(score>=85)
    {
        if(age<25)
        {
            discount = 40;
            printf("Your discount is %d percent ",discount);
        }
        else{
            discount = 25;
            printf("Your discount is %d percent",discount);
        }
    }
    else{
        if(score>=70 && age < 30){
            discount = 15;
            printf("Your discount is %d percent ",discount);
        }
        else{
            printf("No Discount given");
        }
    }
    return 0;
}
