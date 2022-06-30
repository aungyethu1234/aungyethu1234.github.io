#if condition
# True for some value => 123, True, 'str
# False for no value => 0 , false, null
var1 = 100
if var1:
    print("has some value in var1")
    print(var1)

var2 = 0
if var2:
    print('has some value in var2')
    print(var2)
print('Good Bye!')

var = 100
if var<200:
    print('Var is less than 200')
    if var == 150 :  
        print('Var is 150')
    elif var == 100 :
        print('Var is less than 50')
else:
    print('var is greather than or equal 200')
print("Bye!")

