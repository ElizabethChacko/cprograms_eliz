/*pascal's triangle pattern:
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 
 */
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the row limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        for(j=0;j<n-i;j++) 
        {
            printf(" ");
        }
        int c=1;
        for(k=1;k<=i;k++) 
        {   printf("%d ",c);
            c=c*(i-k)/k;
        }
        printf("\n");
    }
    return 0;
}