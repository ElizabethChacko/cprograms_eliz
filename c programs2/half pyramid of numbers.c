/*half pyramid pattern of numbers:    1
                                      1 2
                                      1 2 3
                                      1 2 3 4
                                      .......... */
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("enter the numbers of rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

