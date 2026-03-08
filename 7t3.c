#include <stdio.h>
int main(){
    int marks[10];
    int pass[10],fail[10];
    int i, passC=0 , failC=0;
    int sumP=0, sumF=0;
    printf("Enter marks from 0-10:(Enter -1 to stop)\n");
    for(i=0;i<10;i++){
        scanf("%d",&marks[i]);
        if(marks[i]>=5 && marks[i]<=10){
            pass[passC] = marks[i];
            sumP = sumP + pass[passC];
            passC++;
        }
        else if(marks[i]<=5 && marks[i]>=0){
            fail[failC] = marks[i];
            sumF = sumF + fail[failC];
            failC++;
        }
        else if(marks[i]==-1){
            break;
        }
    }
    printf("Passing marks:\n");
    for(i=0;i<passC;i++){
        printf("%d\n",pass[i]);
    }
    if(passC>0){
        printf("Average passing marks are %d\n",sumP/passC);
    }
    else{
        printf("no students passing marks entered\n");
    }

    printf("Failing marks:\n");
    for(i=0;i<failC;i++){
        printf("%d\n",fail[i]);
    }
    if(failC>0){
         printf("Average failing marks are %d\n",sumF/failC);
    }
    else{
        printf("no students failing marks entered\n");
    }

    return 0;
}