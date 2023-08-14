#include<stdio.h>
int main()
{
    /*char a ='3';
    char* ptra=&a;
    printf("%p\n",ptra);
    printf("%p\n",*(ptra+1));
    int arr[10];
    int* ptr = arr;
    // *(arr+i) hoilo arr[i] er value 
    printf("%p\n",arr);
    arr[5]=68;
    printf("%d",*(arr+5));
    ekhane arr mane hoilo arr[0] er location e
    khun arr+5 means arr[0] er address er sathe 5 box 
    add kore next 5th adress aar oitare dereferenc
    e korle ultimately arr[5] er value e print hobe*/
    int arr[]={1,32,3,4,5,6,67};
    printf("%d\n",arr[0]);
    printf("address of 1st element %d\n",&arr[0]);
    printf("address of 1st element %d\n",arr);
    printf("address of 2nd element %d\n",&arr[1]);
    printf("address of 2nd element %d\n",arr+1);
    printf("Value of 1st element %d\n",*(&arr[0]));
    printf("Value of 1st element %d\n",*arr);
    printf("Value of 2nd element %d\n",*(&arr[1]));
    printf("Value of 2nd element %d\n",*(arr+1));
    //arr++;//this line will throw an error meanwhile if another pointer 
    //arryptr is created then arrayptr++ will be allowed
    int* arrayptr= arr;
    arrayptr++;

    printf("%d",arrayptr);
    return 0;
}