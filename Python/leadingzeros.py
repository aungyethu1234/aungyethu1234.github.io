num = int(input("Enter number range from 0----9999: "))
if num<0:
    num = 0
if num>9999:
    num = 9999
print(end="[")

digit= num // 1000 # 12 // 1000 = 0
print(digit, end='') # 0
num %= 1000 # num = 12 % 1000

digit = num // 100 # 12 // 100
print(digit, end = '') # 0
num %= 100 # num = 12 % 100 = 12

digit = num // 10 # 12 // 10
print(digit, end='') # 1
num %= 10 # num = 1 % 10 = 2
print(num, end= ']') # 2
