def factorial(n): #5
    product = 1 #5 ,20, 60
    while n: #5, 4, 3, 2, 1
        product *= n  # product = 120 * 1 = 120
        n -= 1 #0
    return product

def main():
    print('5 =', factorial(5) )
    print('7!=', factorial(7))

main()