/*inverted full pyramid of star pattern: 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *       */
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the row limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=0;k<2*(n-i)-1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}