def fact(num):
    product =1
    for i in range(num,0,-1):
       product *= i
    print("Factorial: \n",product)
       

a = int(input("Enter number: \n"))
fact(a) 