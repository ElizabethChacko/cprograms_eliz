/*pattern printing(hello) :   H
                              H E
                              H E L
                              H E L L
                              H E L L O */
#include<stdio.h>
int main()
{
int i,j,n=5;
char a[5]="HELLO";
for(i=0;i<n;i++) 
{
  for(j=0;j<n;j++) 
  {
    if(i>=j) 
    {
     printf("%c ", a[j]);
    }
    else
    {
     printf(" ");
    }
  }
  printf("\n");
}
return 0;
}