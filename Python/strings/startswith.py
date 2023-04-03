text = input("Enter text \n")

arr = text.split()

for i in range(0,len(arr)):
    if arr[i].startswith('a') or arr[i].startswith('A'):
        print(arr[i])
