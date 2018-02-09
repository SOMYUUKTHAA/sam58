
#include<stdio.h>
void swap(int *a,int *b);
void main()
{
    int N,K,p;
    printf("ENTER TWO VALUE\n");
    scanf("\t%d",&N);
    scanf("\t%d",&K);
    if(N<=100000)
    {
        if(K<=100000)
        {
           printf("\nBEFORE SWAPPING THE VALUES ARE:\t%d\t%d",N,K);  
           swap(&N,&K);  
        }
    }
printf("\nafter swapping the values are:\t%d\t%d",N,K);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nVALUES ARE SWAPPED:\t%d\t%d",*a,*b);
}

