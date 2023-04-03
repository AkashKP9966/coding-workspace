 #Find the product of elements of a list excluding the duplicates
text = [33,22,3,46,46,3,33,22]
newtext = set(text)
newtext = list(newtext)
new = []
for  i in newtext:
    product = 1
    for digit in str(i):
       product *= int(digit)
    new.append(product) 
         
print(newtext,"\n",new)

