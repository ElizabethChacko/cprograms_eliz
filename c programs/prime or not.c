//to find whether a given number is prime or not
#include<stdio.h>
int main()
{
    int n,flag=0,i;
    printf("enter a positive integer\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf("1 is neither prime nor composite");
    }
    else
    {
        if(flag==0)
        {
            printf("%d is prime number",n);
        }
        else
        {
            printf("%d is not prime number",n);
        }
    }
    return 0;
}