"""to check whether a given number having n-diigits is armstrong or not
sample output:   enter the number
                 153
                 enter the number of digits in the number
                 3
                 153 is armstrong   """
n=int(input("enter the number\n"))
print("enter the number of digits in the number\n")
power=int(input())
sum=0
temp=n
while(temp>0):
    r=temp%10
    rem=r**power
    sum=sum+rem
    temp=temp//10
if(n==sum):
    print(n,"is armstrong")
else:
    print(n,"is not armstrong")        