/* floyd's triangle: 1            
                     2 3
                     4 5 6
                     7 8 9 10
                     ............*/
#include<stdio.h>
int main()
{
    int i=1,n,j,value=1;
    printf("Enter the number of rows in the triangle: ");
    scanf("%d",&n);
    while(i<=n)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",value++); //post increment:use then increment
        }
        printf("\n");
        i++;
    }
}                     
