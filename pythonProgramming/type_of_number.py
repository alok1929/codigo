print("To check if the entered number is positive or negative")
s = int(input("Enter a number "))

if s > 0:
    print("{} is a positive number".format(s))
elif s < 0:
    print("{} is a negative number".format(s))
else:
    print("It is 0")