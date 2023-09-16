#python program to find the sum of digits of a number.
def sum_of_digits(number):
    sum=0
    while(number>0):
        temp=number%10
        sum=sum+temp
        number=number//10
    return(sum)
number=int(input("enter the number\n"))
sum=sum_of_digits(number)
print("Sum of digits:",int(sum))    


    
