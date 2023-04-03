text = "Enter the string"
l1 =text.lower()
l1 = l1.split()
s =''
print(l1)
for word in l1:
    s += word[-1] + word[1:len(word)-1] + word[0] + " "
print(s.capitalize())

