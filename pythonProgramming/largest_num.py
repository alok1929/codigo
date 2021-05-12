print("The largest number from among the 3 given numbers")
a = int(input("Enter the first number "))
b = int(input("Enter the second number "))
c = int(input("Enter the third number "))

if a>b and a>c:
    print("{} is the greatest number".format(a))
if b>a and b>c:
    print("{} is the greatest number".format(b))
if c>a and c>b:
    print("{} is the greatest number".format(c))
