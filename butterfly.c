#include<stdio.h>

int main(){
    int n,left=2;
    scanf("%d",&n);
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 4*n-2; j++)
        {
            if (j%2 !=0)            
                printf(" ");
            else if (j<left || j+left>=4*n-2)           
                printf("*");
            else
                printf(" ");
            if (i==n)
                left=2*n-2;    
        }
        if (i<n)
            left+=2;
        else
            left-=2;    
            printf("\n");
    }
    return 0;    
}