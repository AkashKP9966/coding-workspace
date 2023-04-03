def listManipulation(list,command,location,value):
    if command == 'remove' and location == 'end':
        print(list.pop())

    elif command =='remove' and location == 'beginning':
        print(list.pop(0))

    elif command == 'add' and location == 'end':
        list.append(value)
        print(list)
    

    elif command == 'add' and location == 'beginning':
        list.insert(0,value)
        print(list)

list = [1,2,3,4,5]
command =input("command \n")
location = input("location \n")
value = int(input("Enter value \n"))

listManipulation(list,command,location,value)

