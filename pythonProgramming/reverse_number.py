s = int(input("Enter the number you want to reverse "))
sum = 0
num = s
while num > 0:
    rem = int(num % 10)
    sum = sum*10+rem
    num = int(num/10)

print("The reverse of the number {} is {}".format(s, sum))
