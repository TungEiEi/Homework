#include<stdio.h>

int main(){
    long long int x;
    int y=0;
    int z=0;
    int sum=0;
    scanf("%lld",&x);
    while (x>0)
    {
        y=y+(x%10);
        x/=10;
    }
    while (y>0)
    {
        z=z+(y%10);
        y/=10;
    }
    while (z>0)
    {
        sum=sum+(z%10);
        z/=10;
    }
    printf("%d",sum);

    return 0;
}