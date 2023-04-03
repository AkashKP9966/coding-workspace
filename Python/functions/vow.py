def counter(string):
    vow = ['a','e','i','o','u']
    w = string.lower()
    countv = 0
    countc = 0
    for word in w:
        print(word)
        if word in  vow:
            countv += 1
        elif word not in vow and word != " ":
            countc += 1
            
    print("consonents = {} \n vowels = {}".format(countc,countv))


words = "ENTER THE NAME"
counter(words)