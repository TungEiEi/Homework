#include <stdio.h>

int main()
{
    int High[10];
    float mean=0;
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&High[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%d Student Height : %d\n",i+1,High[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        mean+=High[i];
    }
    printf("Average Student Height : %.3f",mean/10);
    return 0;
    
}