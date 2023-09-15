//program to swap two numbers using a call by reference
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("before swapping:a=%d\tb=%d",a,b);
    swap(&a,&b);
    printf("\n");
    printf("after swapping:a=%d\tb=%d",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
