#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int frq[5];
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int copyarr[5];
    for ( i = 1; i < 5; i++)
    {
        if(copyarr[i]!='\0'){
        if(copyarr[0]==copyarr[i]){frq[0]++;
        copyarr[i]='\0';
        }
        }
        else {continue;}
        
   
    }

    
    
}