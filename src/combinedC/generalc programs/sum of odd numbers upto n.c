//sum of odd numbers:1+3+5+7+.........+n.
#include<stdio.h>
int main()
{
    int n,sum=0,i=1;
    printf("Enter thr limit upto which sum is to be found:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==1)
        {
           sum=sum+i;
           i=i+2;
        } 
    }
    printf("sum of odd numbers from 1 to %d is %d",n,sum);
    return 0;
}