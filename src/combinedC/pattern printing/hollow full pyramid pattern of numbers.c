/*hollow full pyramid pattern of numbers:
         1 
       1   3 
     1       5 
   1           7 
 1 2 3 4 5 6 7 8 9 
 */
#include <stdio.h>
int main()
{
    int rows,i,j,k;
    printf("enter the row limit\n");
    scanf("%d",&rows);
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < 2 * (rows - i) - 1; j++) 
        {
            printf(" ");
        }
        for(k = 0; k < 2 * i + 1; k++) 
        {
            if (k == 0 || k == 2 * i || i == rows - 1) 
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