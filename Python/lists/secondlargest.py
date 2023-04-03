l1 = []
size = int(input("size ="))
for i in range(0,size):
    l1.append(int(input()))

l1.sort()
l1.pop()
print("second largest:",max(l1))