#include <stdio.h>
int main(){
    int i, arr[10];
    int max , min;

    printf("Enter 10 integer values:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min= arr[0];
    for(i=0;i<10;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
     printf("Difference between max and min = %d\n", max - min);
    return 0;
}