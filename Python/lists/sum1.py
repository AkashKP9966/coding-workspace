list = [11,22,32,45,55]

new = []
for  i in list:
    sum = 0
    for digit in str(i):
       sum += int(digit)
    new.append(sum) 
         
print(new)






  

   