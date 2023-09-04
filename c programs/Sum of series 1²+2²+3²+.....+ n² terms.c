//to find the sum of series 1²+2²+3²+.....+ n² terms
#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the limit\n");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+(i*i);
        i++;
    }
    printf("sum of series is %d",sum);
}