l1 = [2,33,45,1,23,44,78,12,9,3]
even = []
odd = []
for i in l1:
    if i % 2 == 0:
        even.append(i)
    else:
        odd.append(i)
print("even = {} and odd = {} ".format(even,odd))