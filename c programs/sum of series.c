//to find sum of series 1+1/2+1/3+.....+1/n terms
#include<stdio.h>
int main()
{
    int n,i=1;
    float sum=0;
    printf("enter the number of terms:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+1/(float)i;
        i++;
    }
    printf("sum of series is %f",sum);
    return 0;
}