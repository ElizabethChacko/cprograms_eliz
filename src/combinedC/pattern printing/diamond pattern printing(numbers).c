/*pattern printing(for n=3):       1
                                 1 2 3
                               1 2 3 4 5
                                 1 2 3
                                   1
 C Program to print diamond pattern using numbers */
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the row limit\n") ;
    scanf("%d",&n) ;
    for ( i = 0; i < 2 * n - 1; i++)
    {
        int c;
        if (i < n)
        {
            c = 2 * (n - i) - 1;
        }
        else
        {
            c = 2 * (i - n + 1) + 1;
        }  
        for (j = 0; j < c; j++) {
            printf(" ");
        }
        for (k = 0; k < 2 * n - c; k++)
        {
         printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}
