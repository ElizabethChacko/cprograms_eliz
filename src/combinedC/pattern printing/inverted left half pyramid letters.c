/*inverted left pyramid alphabet pattern: A B C D E
                                            A B C D
                                              A B C
                                                A B
                                                  A*/
#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the row limit\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i;j++)
        {
            printf(" ");
        }
        for(k=0;k<n-i;k++)
        {
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
    return 0;
}