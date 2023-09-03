/* to check whether a given number is palindrome or not.
Palindrome refers to the number which remains the same when its digits reversed*/
#include<stdio.h>
int main()
{
    int num,temp,remi,rev=0;
    printf("enter a number\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        remi=temp%10;
        temp=temp/10;
        rev=rev*10+remi;
    }
    if(num==rev)
    {
        printf("%d is palindrome",num);
    }
    else
    {
        printf("%d is not palindrome",num);
    }
    return 0;
}

