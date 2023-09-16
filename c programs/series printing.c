//program to display of series 1,3,9,27,81,.......n using for loop
#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,a;
  printf("enter the limit\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    a=pow(3,i);
    printf("%d\t",a);
  }
  return 0;
}