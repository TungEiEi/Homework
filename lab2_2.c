#include<stdio.h>

int main(){
   int a, b;
   int min;
   printf("Enter first number : ");
   scanf("%d",&a);
   printf("Enter second number : ");
   scanf("%d",&b);
   if (a<b)
   { min=a; }
   else
   { min=b; }
   for (int i = min; i>0; i--)
   {
    if (a%i==0 && b%i==0)
    {
        printf("Greatest common divisor = %d",i);
        break;
    }
   }
   return 0;
}
