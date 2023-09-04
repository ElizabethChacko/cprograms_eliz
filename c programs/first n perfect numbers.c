// to print first n perfect numbers
#include<stdio.h>
int main()
{
    int num=1,sum=0,i,count=1,n;
    printf("enter the limit of numbers to be printed\n");
    scanf("%d",&n);
    printf("perfect numbers are:\n");
    while(count<=n)
    {
      for(i=1;i<num;i++)
      {
        if(num%i==0)
        {
            sum=sum+i;
        }
      }
      if(num==sum)
      {
        printf("%d\t",num);
        count++;
      }
      num++,sum=0;
    }
    return 0;
}