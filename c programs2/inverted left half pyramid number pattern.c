/*inverted left half pyramid of numbers:  1 2 3 4 5
                                            1 2 3 4
                                              1 2 3
                                                1 2
                                                  1 */
#include<stdio.h>
int main()
{
    int rows,i,j,k;
    for(i = 0; i < rows; i++) 
    {
        for(j = 0; j < 2 * i; j++) 
        {
            printf(" ");
        }
        for(k = 0; k < rows - i; k++) 
        {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
return 0;
}