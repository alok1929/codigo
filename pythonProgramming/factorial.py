print("Factorial of a number iss defined as the product of each number in the numerical table till a certain number")
print("The factorial of 5 is 120 i.e., 5! = 1*2*3*4*5")

num = int(input("Enter the number for which you have to find the factorial "))
fact = 1

for x in range(1, num+1):
    fact = fact*x

print("Factorial of the given number is {}".format(fact))