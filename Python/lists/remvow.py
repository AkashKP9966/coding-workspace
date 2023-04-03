vow = ['a','e','i','o','u','A','E','I','O','U']
text = "We are not alone in the universe"
list = [i for i  in text if i not in vow and i != ' ']
print(list)