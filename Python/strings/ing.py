text = input("Enter text here \n")

if len(text) > 3 and text.endswith('ing'):
    newtext = text.replace('ing','ly')
    print(newtext)
  
elif len(text) > 3:
    newtext = text + 'ing'
    print(newtext)
else:
    print(text)

