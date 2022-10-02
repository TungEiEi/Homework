#include <stdio.h>

float square(int x) 
{ 
        float prev;
        float sqrt = 1; 
        while(prev != sqrt) 
        { 
            prev = sqrt; 
            sqrt = (sqrt + x/sqrt)/2; 
        } 
        return sqrt; 
} 

int main()
{
    int a;
    scanf("%d",&a);
    printf("%f",square(a));
}