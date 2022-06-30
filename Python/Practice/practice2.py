
myan = int(input("Enter myanmar mark: "))
eng = int(input("Enter english mark: "))
maths = int(input("Enter maths mark: "))
phys = int(input("Enter pysics mark: "))
bio = int(input("Enter bio mark: "))

if myan >= 40 and eng >= 40 and maths >= 40 and phys >= 40 and bio >= 40:
    print("You pass exam....")
    if myan >= 80:
        print("Myanmar distinction")
    if eng >= 80:
        print("English distinction")
    if maths >= 80:
        print("Maths distinciton")
    if phys >= 80:
        print("Physics distinciton")
    if bio >= 80:
        print("Bio disctinction")
else:
    print('You fail examination')





