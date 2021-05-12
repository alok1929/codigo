a = int(input("Enter the number till which you want to find the sum "))
sum = 0

for x in range(0,a+1):
    sum = sum+x

print("The sum of first {} natural numbers is {}".format(a, sum))