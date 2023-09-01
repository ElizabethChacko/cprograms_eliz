//check whether a given number is even or odd without using modulus operator
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if((num&1)==0)
    {
        printf("number %d is even",num);
    }
    else
    {
        printf("number %d is odd",num);
    }
return 0;
}