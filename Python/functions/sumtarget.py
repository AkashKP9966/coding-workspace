def sumof(l , target):
    for i in range(0, len(l)):
        for j in range(i+1, len(l)):
            if l[i] + l[j] == target:
                print("numbers are:",l[i], l[j])
                break
            else:
                print("No items exist")
                break
        break


a = [2,7,11,9]
b = 9

sumof(a,b)
