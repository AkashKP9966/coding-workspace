text = input("Enter text \n")
countwhite = 0
countvow  = 0
countcon = 0

for i in text:
    if i == 'a' or i=='e' or i=='i' or i == 'u':
        countvow += 1
    elif i == ' ':
        countwhite += 1
    else:
        countcon += 1
print("vowels = {}, consonents = {}, whitespace = {}".format(countvow, countcon, countwhite))
