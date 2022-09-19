#include <stdio.h>

int main()
{
    int num1, num2;
    int x = 1, a = 2;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    while (a < num1 || a < num2)
    {
        if (num1 % a == 0 && num2 % a == 0)
        {
            x *= a;
            num1 /= a;
            num2 /= a;
        }
        else if (num1 % a != 0 || num2 % a != 0)
            a++;
    }
    printf("%d", x);
    return 0;
}
