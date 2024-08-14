#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter the rows:\n");
    
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
