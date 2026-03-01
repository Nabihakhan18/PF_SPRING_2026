#include <stdio.h>
int main(){
    int balance;
    int withdrawl;
    printf("Enter your bank balance:");
    scanf("%d", &balance);
    while(balance>0){
        printf("Enter the withdrawl amount:");
        scanf("%d",&withdrawl);
        balance = balance - withdrawl;
        printf("Your remaining balance is %d\n", balance);
    }
    printf("Balance Exhausted");
    return 0;
}