n = 5
k = n 

for i in range(0 , n):
    for j in range(0,k):
        print(end = " ")
    k= k-1
    for l in range(0,i+1):
        print("*", end =' ')
    print("\r")

for i in range(n,0,-1):
    print("#" )
    for j in range(0,i):
        print("*", end = " ")
       
    print("\r")

for i in range(0,n):
    for j in range(0,i):
        print("*",end = "")
    print("\r")
