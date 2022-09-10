#include<stdio.h>

int main(){
    int n,a,b,i,j;
    scanf("%d", &n);
    a=1;
    b=2*n-1;
    for(i=1;i<n; i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j >= a && j <= b)
            printf("*");
            else
            printf(" ");
        }
        a++;
        b--;
        printf("\n");
    }
    for(i=1;i<=n; i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j >= a && j <= b)
            printf("*");
            else
            printf(" ");
        }
        a--;
        b++;
        printf("\n");
    }
    return 0;
}    