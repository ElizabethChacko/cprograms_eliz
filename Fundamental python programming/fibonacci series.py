"""program to print fibonacci series using python.
fibonacci series: 0 1 1 2 3 5 8......"""
n=int(input("enter the number\n"))
a=0
b=1
i=2
print('fibonacci series is:')
print(a,'\n',b)
while(i<=n):
    s=a+b
    print(s)
    a=b
    b=s
    i=i+1
