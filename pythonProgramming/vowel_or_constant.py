s = input("Enter a word ")
s = s.lower()
length = len(s)
for x in range(0, length):
    if s[x] == "a" or s[x] == "e" or s[x] == "i" or s[x] == "o" or s[x] == "u":
        print("{} is a vowel".format(s[x]))
    else:
        print("{} is a consonant".format(s[x]))