a = int(input("Enter the number of which you want the tables "))
pro = 0
for x in range(1, 11):
    pro = a*x
    print("{} * {} = {}".format(a, x, pro))
