def counter(string):
    countA = 0
    countB = 0
    for letter in string:
        if letter[0:len(string)].islower():
            countA += 1
        elif letter[0:len(string)].isupper():
            countB += 1
    print("lower = {}  upper = {}".format(countA,countB))
        


        

sent = input("Enter text \n")
counter(sent)