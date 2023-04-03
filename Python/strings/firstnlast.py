text = "Enter the text "
words = text.split()

s = ''
for word in words:
        s += word[0].upper() + word[1:-1] + word[-1].upper() + " "
print(s)
    
