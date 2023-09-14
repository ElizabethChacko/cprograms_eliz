
    /*C program to print right half pyramid pattern of alphabets: A
                                                                  A B
                                                                  A B C
                                                                  A B C D*/

#include <stdio.h>
int main()
{
    int i,j,rows;
    printf("enter the number of rows\n");
    scanf("%d",&rows);
    for (i = 0; i < rows; i++)
    {
      for (j = 0; j <= i; j++)
        {
         printf("%c ", 'A' + j);
        }
      printf("\n");
    }
    return 0;
}
