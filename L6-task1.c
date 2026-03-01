#include <stdio.h>
int main(){
    int i;
    int attendance;
    int present = 0;
    for(i=1;i<=30;i++){
        printf("Enter 1 if Present , 0 if Absent");
        scanf("%d", &attendance);
        if(attendance==1){
            present = present + 1;
        }
    }
    printf ("%d students were present today", present);   
    return 0;
}