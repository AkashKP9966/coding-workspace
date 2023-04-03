def hotel_nights(days):
    costofstay = 140*days
    return costofstay

def plane_ride(city):
    if city =='Charlotte':
        costoftrip = 183
        return costoftrip

    elif  city == 'Tampa':
        costoftrip = 220
        return costoftrip
    
    elif city == 'Pittsburgh':
        costoftrip = 222
        return costoftrip

    elif  city == 'Los Angeles':
        costoftrip = 475
        return costoftrip
    else:
        print("Invalid destination")

def rental_car_cost(days):
    cost = 40*days
    if  days >= 7:
        cost -= 50
        return cost 
    elif 3 <= days < 7:
        cost -= 20
        return cost 

def trip_cost(city,days,spendingmoney):
    sum = 0
    
    sum = hotel_nights(days) + plane_ride(city) + rental_car_cost(days) + spendingmoney

    print("Total cost of travel",sum)

city = input("Enter city name \n")
days = int(input("Enter the days \n"))
spendingmoney = int(input("Enter spending money \n"))

trip_cost(city,days,spendingmoney)

