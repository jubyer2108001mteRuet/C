#include<stdio.h>
int main()
{
    int count=2;
    int i,j;
    int a1[2][2]={2,3,
                  4,6};
    int a2[2][2]={4,5,
                  2,3};
    int sum[2][2];
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
         scanf("%d",&a1[i][j]);    
        }
        
    }
    for ( i = 0; i < count; i++)
    {
        for ( j = 0; j < count; j++)
        {
         scanf("%d",&a2[i][j]);    
        }
        
    }
    printf("result... ... ...\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j]=a1[i][j]+a2[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
        
    } 
     
    
    
    return 0;
}