// to find the sum of series 1+(1+2)+(1+2+3)+(1+2+3+4)+.....n terms
#include<stdio.h>
int main()
{
    int num,i=1,j,sum=0;
    printf("enter the number of terms:\n");
    scanf("%d",&num);
    while(i<=num)
    {
        j=1;
        printf("(");
        while(j<=i)
        {   printf("%d",j);
            sum=sum+j;
            j++;
            if(j<=i)
            {
                printf("+");
            }
            else
            {
                printf(")");
            }
        }
        if(i<num)
        {
            printf("+");
        }
        i++;
    }
    printf("= %d",sum);
    return 0;
}