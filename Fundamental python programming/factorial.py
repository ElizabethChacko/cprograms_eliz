#python program to find the factorial of a given number
n=int(input("enter the number\n"))
f=1
for i in range(1,n+1,1):
    f=f*i
print("factorial of",n,"is",f)    