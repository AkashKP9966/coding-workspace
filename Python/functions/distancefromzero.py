def distance_from_zero(num):
    if type(num) == int or type(num) == float:
        print("absolute of number",abs(num))
    else:
        print("Nope")

fig1 = input("String")
fig2 = float(input('Number:'))

distance_from_zero(fig1)

distance_from_zero(fig2)