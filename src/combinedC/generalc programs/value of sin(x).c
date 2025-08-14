/*according to sine series,sin(x)= x - (x ^ 3)/(3!) + (x ^ 5)/(5!) - (x ^ 7)/(7!) +...(x^n)/(n!)
 Program to find the value of sin(x) where x is in degrees.*/
#include<stdio.h>
int main()
{
    int i, n;
    float x, sum, t,temp;
    printf(" Enter the value for x in degree: ");
    scanf("%f",&x);
     
    printf(" Enter the value for power of the end term: ");
    scanf("%d",&n);
    temp=x;               //temporary storage of value of x in degree.
    x=x*3.14159/180;      //degree to radian conversion.
    t=x;
    sum=x;
    //Loop to calculate the value of Sine 
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
     
    printf(" The value of Sin(%.4f) = %.4f",temp,sum);
    return 0;
}
