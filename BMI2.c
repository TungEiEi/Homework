#include<stdio.h>

int main(){
    float w;
    float h;
    float BMI;
    do {
        printf("Enter height (meter): ");
        scanf("%f",&h);
    } while (h<=0);
    do {
        printf("Enter weight (kg): ");
        scanf("%f",&w);
    } while (w<=0);
    printf("BMI : %.2f\n",BMI=w/(h*h));
    if (BMI<18.5)
    {
        printf("Underweight");
    }
    else if (BMI>=18.5 && BMI<=24.9)
    {
        printf("Normal weight");
    }
    else if (BMI>24.9 && BMI<=29.9)
    {
        printf("Overweight");
    }
    else if (BMI>29.9)
    {
        printf("Obesity");
    }
    return 0 ;
}