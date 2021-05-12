print("An armstrong number is a number whose sum of the cubes of individual digits will be equal to the number")
s = int(input("Enter the number to check if it is an armstrong number "))
num = s
sum = 0

while num > 0:
    rem = int(num%10)
    sum = sum+(rem*rem*rem)
    num = int(num/10)

if s == sum:
    print("It is an armstrong number")
else:
    print("It is not an armstrong number")

