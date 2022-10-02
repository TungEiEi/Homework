#include<stdio.h>

float BMI(float h,float w);
void check(int BMI);

int main(){
    float h,w;
    printf("Enter height (meter): ");
    scanf("%f",&h);
    printf("Enter weight (kg): ");
    scanf("%f",&w);
    printf("BMI : %.2f\n",BMI(h,w));
    check(BMI(h,w));
}

float BMI(float h,float w)
{
    int BMI=1;
    BMI=w/(h*h);
    return BMI;
}

void check(int BMI)
{
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
}
