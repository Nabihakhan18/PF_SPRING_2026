#include <stdio.h>
int main(){
    int choice;
    float n1,n2,result;
    do{
        printf("1. Addition\n2. Subtraction\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter 2 numbers:\n");
            scanf("%f %f",&n1,&n2);
            result = n1 + n2;
            printf("The sum is %.2f\n",result);
            break;
        case 2:
            printf("Enter 2 numbers:\n");
            scanf("%f %f",&n1,&n2);
            result = n1 - n2;
            printf("The result is %.2f\n",result);
            break;
        case 3:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice,try again\n");
            break;
        }
    }while(choice!=3);
    return 0;
}