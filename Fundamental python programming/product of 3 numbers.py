"""Write a python program to find and display the product of three positive integer values based on the rule mentioned below:
It should display the product of the three values except when one of the integer value is 7. In that case, 7 should not be included in the product and the values to its left also should not be included.
If there is only one value to be considered, display that value itself. If no values can be included in the product, display -1.
"""
def product(num1, num2, num3):
    product = 0
    if num1 != 7 and num2 != 7 and num3 != 7:
        product = num1 * num2 * num3
    elif num1 == 7:
        product = num2 * num3
    elif num2 == 7:
        product = num3
    elif num3 == 7:
        product = -1
    return product
n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))
n3 = int(input("Enter third number: "))
final_product = product(n1, n2, n3)
print(final_product)