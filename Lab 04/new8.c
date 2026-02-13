#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    float a, b, result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("10. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            scanf("%f %f", &a, &b);
            printf("%f", a + b);
            break;

        case 2:
            scanf("%f %f", &a, &b);
            printf("%f", a - b);
            break;

        case 3:
            scanf("%f %f", &a, &b);
            printf("%f", a * b);
            break;

        case 4:
            scanf("%f %f", &a, &b);
            if(b == 0)
                printf("Division by zero not allowed");
            else
                printf("%f", a / b);
            break;

        case 5:
            scanf("%f", &a);
            printf("%f", a * a);
            break;

        case 6:
            scanf("%f", &a);
            printf("%f", a * a * a);
            break;

        case 7:
            scanf("%f", &a);
            if(a < 0)
                printf("Square root of negative number not allowed");
            else
                printf("%f", sqrt(a));
            break;

        case 8:
            scanf("%f %f", &a, &b);
            printf("%f", pow(a, b));
            break;

        case 9:
            scanf("%f", &a);
            if(a < 0)
                printf("%f", -a);
            else
                printf("%f", a);
            break;

        case 10:
        {
            int x, y;
            scanf("%d %d", &x, &y);
            if(y == 0)
                printf("Modulus by zero not allowed");
            else
                printf("%d", x % y);
            break;
        }

        default:
            printf("Invalid Choice");
    }

    return 0;
}
