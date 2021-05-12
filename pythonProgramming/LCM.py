print("To find the LCM of 2 numbers")
a = int(input("Enter the first number "))
b = int(input("Enter the second number "))
lcm = 0

for x in range(1, b+1):
    ax = a*x
    if ax%b == 0:
        lcm = ax
        break

print("The LCM of the 2 numbers is {}".format(lcm))