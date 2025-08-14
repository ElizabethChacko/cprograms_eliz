/*To check whether a given number is perfect or not.
A perfect number is a positive integer that is equal to its sum of its divisors */
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("%d is perfect number",num);
    }
    else{
        printf ("%d is not perfect number",num);
    }
    return 0;
}