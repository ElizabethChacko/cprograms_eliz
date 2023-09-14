/*inverted left pyramid of star patter:  * * * * *
                                           * * * *
                                             * * *
                                               * *
                                                 *    */
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
        ptintf(" ");
       }
       for(k=0;k<n-i;k++)
       {
        printf("* ");
       }
       printf("\n");
    }
    return 0;
}