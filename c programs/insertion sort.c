/*program to arrange the given list of elements in ascending order using insertion sort.
Insertion sort works on the principle of sorting by insertion.
sample output: 
enter the number of elements in the array
5
enter the elements in the array
7 2 4 1 9
after sorting:
1
2
4
7
9
 */
#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            temp=a[i];
            for(j=i-1;j>=0;j--)
            {
                a[j+1]=a[j];
                if(j==0||a[j-1]<=temp)
                {
                    break;
                }
            }
            a[j]=temp;
        }
    }
    printf("after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}