// program to read n numbers and count number of positive,negative and zero numbers
#include<stdio.h>
int main()
{
    int a[20],p=0,n=0,z=0,limit,i;
    printf("enter the number of elements\n");
    scanf("%d",&limit);
    printf("enter %d numbers",limit);
    for(i=1;i<=limit;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]>0)
      {
        p++;
      }
      else if(a[i]<0)
      {
        n++;
      }
      else
      {
        z++;
      }
    }
    printf("no. of positive numbers:%d\n ",p);
    printf("no.of negative numbers:%d\n ",n);
    printf("no.of zeros:%d",z);
    return 0;
}