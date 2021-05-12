x = int(input("Enter the number of rows of pattern you want "))
for num in range(x+1):
    for nu in range(x+1):
        if nu < num:
            print('*', end=' ')
        else:
           continue
    print(' ')
