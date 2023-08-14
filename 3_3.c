#include<stdio.h>
int main()
{
    int a1[3][3],a2[3][3],sum[3][3],i,j,count=3;
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            scanf("%d",&a1[i][j]);
        }
        
    }
    printf("2nd matrix: \n");
        for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            scanf("%d",&a2[i][j]);
        }
        
    }
    printf("Printing ... ... ...\n");
        for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}