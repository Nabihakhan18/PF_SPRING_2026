#include <stdio.h>

int main()
{
    char u1,u2,u3,u4;
    char p1,p2,p3,p4;

    printf("Enter Username: ");
    scanf(" %c%c%c%c", &u1,&u2,&u3,&u4);

    printf("Enter Password: ");
    scanf(" %c%c%c%c", &p1,&p2,&p3,&p4);

    if(u1=='u' && u2=='s' && u3=='e' && u4=='r' &&
       p1=='7' && p2=='8' && p3=='9' && p4=='0')
        printf("Connected Successfully");
    else
        printf("Connection Failed");

    return 0;
}
