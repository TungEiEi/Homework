#include <stdio.h>

int main()
{
    float w;
    float h;
    float BMI;
    printf("Enter height (meter): ");
    scanf("%f", &h);
    printf("Enter weight (kg): ");
    scanf("%f", &w);
    printf("BMI : %.2f\n", BMI = w / (h * h));
    if (BMI < 18.5)
    {
        printf("Underweight");
    }
    else if (BMI >= 18.5 && BMI <= 24.9)
    {
        printf("Normal weight");
    }
    else if (BMI > 24.9 && BMI <= 29.9)
    {
        printf("Overweight");
    }
    else if (BMI > 29.9)
    {
        printf("Obesity");
    }
    return 0;
}
