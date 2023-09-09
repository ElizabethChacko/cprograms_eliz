#To covert temperature in Fahrenheit to degree celsius using function.
def convert(tempinfahrenheit): #function signature
  tempincelsius=(tempinfahrenheit-32)*(5/9)
  return tempincelsius    
tempinfahrenheit=float(input("Enter temperature in Fahrenheit\n"))
result=convert(tempinfahrenheit) #function call
print("Temperature equivalent to",tempinfahrenheit,"°F is",round(result,4),"°C")