/*pyramid of letters:          
         A 
       A B C 
     A B C D E 
   A B C D E F G 
 A B C D E F G H I  */
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
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
    return 0;
}