#include <stdio.h>
int main(){
    float price, total=0, final;
    int choice;

    do{
        printf("Enter price of product: ");
        scanf("%f",&price);
        total = total + price;

        printf("Add another product? (1=Yes, 0=No): ");
        scanf("%d",&choice);
    }while(choice == 1);

    if(total > 5000){
        final = total * 0.95;
    }else{
        final = total;
    }

    printf("Total payable amount: %.2f\n", final);

    return 0;
}