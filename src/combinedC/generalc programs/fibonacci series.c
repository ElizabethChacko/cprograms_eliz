// To print fibonacci series:0 1 1 2 3 5 8 13.......
#include<stdio.h>
int main()
{
    int n,a=0,b=1,i=2,s;
    printf("How many terms do you want to print?\n");
    scanf("%d",&n);
    printf("Fibonacci series:\n");
    printf("%d\t%d\t",a,b);
    while(i<n)
    {
        s=a+b;
        printf("%d\t",s);
        a=b;
        b=s;
        i++;
    }
    return 0;
}