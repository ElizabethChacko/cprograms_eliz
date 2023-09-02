// to find the roots of a quardratic equation ax^2+bx+c
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,num;
    float r1,r2;
    printf("enter the coefficients a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots are real and unequal\n");
        printf("roots are:%f%f",r1,r2);
    }
    else if(d==0)
    {
        r1=-b/(2*a);
        printf("roots are real and equal\n");
        printf("roots are %f%f",r1,r1);
    }
    else
    {
        printf("no real roots,roots are imaginary");
    }

return 0;
}
