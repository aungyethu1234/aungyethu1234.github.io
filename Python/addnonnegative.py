print('Enter positive number and negative end list: ')
entry = 0
sum = 0

while entry >= 0 :
    entry = int(input("Enter number: "))
    if entry >= 0 :
        sum += entry
print('Sum: ',sum)
