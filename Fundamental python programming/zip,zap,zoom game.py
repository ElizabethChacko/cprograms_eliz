"""Write a python program that displays a message as follows for a given number:

If it is a multiple of three, display "Zip"
If it is a multiple of five, display "Zap".
If it is a multiple of both three and five, display "Zoom".
If it does not satisfy any of the above given conditions, display "Invalid number!" """

def display(num):
    message=""
    if num % 3 == 0 and num % 5 == 0:
        message="Zoom"
    elif num % 3 == 0:
        message="Zip"
    elif num % 5 == 0:
        message="Zap"
    else:
        message="Invalid number!"
    return message
num=int(input("enter the number\n"))
message=display(num)
print(message)