/*hollow full pyramid pattern using numbers:
1 2 3 4 5 6 7 8 9 
  1           7 
    1       5 
      1   3 
        1 
*/
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter the row limit\n");
    scanf("%d",&n);
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < 2 * i + 1; j++) 
        {
            printf(" ");
        }
        for(k = 0; k < 2 * (n - i) - 1; k++) 
        {
            if (k == 0 || k == 2 * (n - i) - 2 || i == 0)
            {
                printf("%d ", k + 1);
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}