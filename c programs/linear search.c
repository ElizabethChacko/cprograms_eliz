//program to check whether an element is present in an array or not
#include<stdio.h>
int main()
{
    int a[20],key,i,n,flag=0;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter %d integers\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&key);
    for(i=1;i<=n;i++)
    {
        if(a[i]==key)
        {
            printf("%d is present at location %d\n",key,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%d is not present in array",key);
    }
    return 0;
}