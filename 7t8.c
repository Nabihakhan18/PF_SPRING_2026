#include <stdio.h>
int main(){
    char str[100];

    printf("Enter characters:\n");
    scanf("%[^A-Za-z]", str);

    printf("Non alphabetic characters entered:\n");
    printf("%s\n", str);

    return 0;
}