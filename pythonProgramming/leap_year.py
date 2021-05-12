print("Leap year is an year which has a total of 366 days")
in_year = int(input("Enter the year you would like to check "))

if in_year % 4 == 0 and in_year % 100 != 0 or in_year%400 == 0:
    print("{} is a leap year".format(in_year))
else:
    print("{} is not a leap year".format(in_year))