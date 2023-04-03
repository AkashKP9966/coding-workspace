text = input("Enter the string \n")
y =text[0]
x= text[-1]
newtext = text.replace(y,x)
neword = text.replace(x,y)


print(neword)
