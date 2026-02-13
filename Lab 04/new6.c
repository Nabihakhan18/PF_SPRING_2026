#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    percentage = (m1 + m2 + m3 + m4 + m5) / 5;

    if (percentage >= 85)
        printf("Full Scholarship");
    else if (percentage >= 70)
        printf("Partial Scholarship");
    else if (percentage >= 50)
        printf("Eligible for Consideration");
    else
        printf("Not Eligible");

    return 0;
}
