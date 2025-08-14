//to check whether a given number is armstrong or not having n digits
#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,sum=0,temp,num,power=0;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("enter the number of digits\n");
    scanf("%d",&n);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        power=pow(rem,n);
        sum=sum+power;
        temp=temp/10;
    }
    if(num==sum)
    {
        printf("%d is armstrong",num);
    }
    else{
        printf("%d is not armstrong",num);
    }
    return 0;
    

}