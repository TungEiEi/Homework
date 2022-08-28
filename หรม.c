#include<stdio.h>

int main(){
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    for (int i=num1+num2; i>0 ;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            printf("Greatest common divisor = ");
            printf("%d", i);
            break;
        }    
    }        
    return 0;
}