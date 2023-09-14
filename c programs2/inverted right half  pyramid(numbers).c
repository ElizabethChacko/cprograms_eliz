/*inverted right pyramid pattern:  1 2 3 4 5
                                   1 2 3 4
                                   1 2 3
                                   1 2
                                   1          */
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("enter the row limit\n");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i;j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}