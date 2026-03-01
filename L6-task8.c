#include <stdio.h>
int main(){
    int guess;
    printf("Enter your guess:");
    scanf("%d",&guess);
    while (guess!=7)
    {
       if(guess<7){
        printf("Too Low\n");
       }
       else if(guess>7){
        printf("Too High\n");
       }
        printf("Enter your guess:");
        scanf("%d",&guess);
    }
    return 0;
}