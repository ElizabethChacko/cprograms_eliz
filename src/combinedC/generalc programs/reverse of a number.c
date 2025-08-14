// reverse of a given number
#include<stdio.h>
int main()
{
  int num,rev=0,remi;
  printf("Enter the number\n");
  scanf("%d",&num);
  while(num!=0)
  {
    remi=num%10;
    num=num/10;
    rev=rev*10+remi;
  }
  printf("reverse of given number is %d",rev);
  return 0;
}