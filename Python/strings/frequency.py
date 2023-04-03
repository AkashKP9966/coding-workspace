text = input("enter string \n")
countA = 0
countB = 0
for i in text:
    if i == 'a':
        countA += 1
    elif i == 'c':
        countB += 1
print("countA:{} and countB:{}".format(countA,countB))
