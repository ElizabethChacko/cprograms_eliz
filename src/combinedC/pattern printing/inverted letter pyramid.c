/*inverted full pyramid of letters:
A B C D E F G H I 
  A B C D E F G 
    A B C D E 
      A B C 
        A  
*/
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
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
    return 0;
}