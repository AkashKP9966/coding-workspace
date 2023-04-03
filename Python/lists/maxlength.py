text = ['we', 'are','almost','satisfactor','equillibrium']
length = []
for i in text:
     x =len(i)
     length.append(x)
print("The longest word contain {} letters".format(max(length)))