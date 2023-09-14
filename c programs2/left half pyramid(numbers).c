/*left half pyramid of numbers:       1
                                    1 2
                                  1 2 3
                                1 2 3 4     */
#include<stdio.h>                                
int main()
{
    int rows,i,j,k;
    printf("enter the row limit\n");
    scanf("%d",&rows);
    for(i = 0; i < rows;i++)
    {
        for(j = 0; j < 2 * (rows - i) - 2; j++) 
        {
            printf(" ");
        }
        for(k = 0; k <= i; k++) 
        {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}