#include <stdio.h>
int main(){
    int arr[10];
    int i,num;
    int num_count =0;
    printf("Enter 10 integer values:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you wish to search:\n");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        if(arr[i]==num){
            num_count=num_count+1;
        }
    }
    if(num_count==0){
        printf("Number not found\n");
    }
    else{
        printf("Your number %d occured %d times",num,num_count);
    }
    return 0;
}