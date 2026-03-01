#include <stdio.h>
int main(){
    int n,i;
    int sum=0;
    printf("Enter number of boxes:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum +i;
    }
    printf("total decorative items: %d\n",sum);
    return 0;
}