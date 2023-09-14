/*inverted alphabetic right half pyramid:  A B C D E 
                                           A B C D 
                                           A B C 
                                           A B 
                                           A      */
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
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}