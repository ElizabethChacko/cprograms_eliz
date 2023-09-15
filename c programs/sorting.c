// program to sort an array in ascending order
#include<stdio.h>
int main()
{
    int a[20],i,j,n,t;
    printf("enter the size of the arrya:\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);   
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
   printf("sorted array is:\n");
   for(i=1;i<=n;i++)
   {
    printf("%d\t",a[i]);
   }
   return 0;
}