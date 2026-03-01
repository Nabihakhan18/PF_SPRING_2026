#include <stdio.h>
int main(){
    int pw;
    do{
        printf("Enter your pw:");
        scanf("%d",&pw);
        if(pw!=1234){
            printf("Incorrect password, try again\n");
        }
    }
    while (pw!=1234);
    printf("Access granted");  
    return 0;
}