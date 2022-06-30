print("Please enter 4 digit to check maximum")
num1 = int(input("Enter Num1: "))
num2 = int(input("Enter Num1: "))
num3 = int(input("Enter Num1: "))
num4 = int(input("Enter Num1: "))
max = num1
if num2>max:
    max=num2
if num3>max:
    max = num3
if num4>max:
    max = num4

print(max, 'is the maximum number of ',num1, num2, num3, num4)


