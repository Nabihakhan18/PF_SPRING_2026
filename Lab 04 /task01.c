#include <stdio.h>
int main(){
    float percentage;
    
    printf("ENTER THE PERCENTAGE ATTENDANCE\n");
    scanf("%f", &percentage);
    if(percentage>= 75){
        printf("YOU ARE SELECTED FOR THE TOURNAMENT\n");
    }
    else{
        printf("YOU ARE SHORT ON ATTENDANCE\n");
    }

    return 0;
}
