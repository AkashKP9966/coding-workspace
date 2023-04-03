text = "Enter theteTxyy"

count = 0
for word in text:
    if word[0:len(text)].islower():
        count += 1
print(count)