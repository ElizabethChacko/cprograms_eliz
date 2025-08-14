//program to sort elements in a list in ascending order using selection sort.
#include<stdio.h>
int main()
{
    int list[20],i,j,n,temp,small,position;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    for(i=0;i<n-1;i++)
    {
        small=list[i];
        position=i;
        for(j=i+1;j<n;j++)
        {
            if(small>list[j])
            {
                small=list[j];
                position=j;
            }
        }
        temp=list[i];
        list[i]=list[position];
        list[position]=temp;
    }
    printf("the sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",list[i]);
    }
}