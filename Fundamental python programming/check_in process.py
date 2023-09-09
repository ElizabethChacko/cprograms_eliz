# python program for check-in process in an airport
ticket_status="Confirmed"
luggage_weight=int(input("Enter the weight of luggage:\n"))
max_weight_limit=30  #Maximum permissible limit of weight for the airline
extra_luggage_charge=0
if(ticket_status=="Confirmed"):
    if(luggage_weight>0 and luggage_weight<=max_weight_limit):
        print("Check-in cleared")
    elif(luggage_weight<=(max_weight_limit+10)):
        extra_luggage_charge=300*(luggage_weight-max_weight_limit)
    else:
        extra_luggage_charge=500*(luggage_weight-max_weight_limit)
    if(extra_luggage_charge>0):
        print("Extra luggage charge is Rs.", extra_luggage_charge)
        print("Please make the payment to clear check-in")
else:
    print("Sorry, ticket is not confirmed")
