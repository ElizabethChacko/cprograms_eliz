/*c program to print left half pyramid pattern of letters:                 A
                                                                         A B
                                                                       A B C
                                                                     A B C D */
#include <stdio.h>                                        
int main()
{
    int rows,i,j,k;
    printf("enter the row limit\n");
    scanf("%d",&rows);
    for(i= 0; i < rows; i++)
    {
        for (int j = 0; j < 2 * (rows - i) - 1; j++) 
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) 
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}