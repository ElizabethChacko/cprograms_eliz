#include<stdio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],rows,columns;
    printf("enter the rows and columns\n");
    scanf("%d%d",&rows,&columns);
    printf("enter the elements of first matrix\n");
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    printf("enter the elements of the second matrix\n");
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=columns;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("the sum of two matrices is:\n");
    for(int i=1;i<=rows;i++)
    {
      for(int j=1;j<=columns;j++)
      {
        printf("%d ",c[i][j]);
      }
    }
return 0;
}