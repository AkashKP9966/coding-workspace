d1 = {'Ten': 10, 'Twenty': 20, 'Thirty': 30}
d2 ={'Thirty': 30, 'Fourty': 40, 'Fifty': 50}

#d3 ={**d1,**d2}
d1.update(d2)
d3 = d1
print(d3)