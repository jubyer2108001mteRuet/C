#include<stdio.h>

int main()
{
    //gotta print 1 1 2 3 5 8 13 21 34 ... ... ... anf find nth element of fibonacci series where the range is between 0 to 50
   int n=1,previous_n=1,count=51,arr[51];
   int a; scanf("%d",&a);
    for (int i = 0; i < count; i++)
    {
        arr[i]=n;//assigns the first element of the series by default 
        if(n==1){previous_n=0;
        n=n+previous_n;
        arr[++i]=n;// does the same because of the liberty of the property that we can assume it will always have 1 and 1 in first 2 position
        n++; continue;//increment of n so that it does not get stuck into n==1 condition and then continue it so that previous n does not add up with it
        }
        if(i==1) continue;//as i==1 already been booked by the 2nd default element it is necessary to skipping this
        if(n==2){previous_n=1;
        n=n+previous_n;
        previous_n=2;}
        else {
            int temp=previous_n;
            previous_n=n;
            n=n+temp;
            }


    }
printf("%d",arr[a-1]);    
/*for (int i =0 ; i < count; i++)
{
    printf("%d   ",arr[i]);
}*/

  
}
//author : Ahmed Jubyer
//          RUET MTE'21(2108001)(noobie-_-)
