dict = {'name':'Mg Mg', 'dob': '8-9-1990'}
print(type(dict))
print(dict['name'], dict['dob'])
dict['age'] = 21
dict['city'] = 'Yangon'
print(dict)
print(dict.keys())
print(dict.values())

for key in dict : 
    print(key,dict[key])

