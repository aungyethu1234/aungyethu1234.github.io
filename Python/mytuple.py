tuple = ('abc', 123, 'hi', 23, 45)
print(type(tuple))
print(tuple[0])
print(tuple[:3])
print(tuple)
#tuple[0] = 'def' error cannot change value
print(tuple[-1])
print(tuple * 2)

for item in tuple :
    print(item, end = " ")
    
for item in tuple :
    print(item)

