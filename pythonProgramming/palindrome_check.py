print("It is a word or a number which when seen from backwards also the same as the word")
st = input("Enter the number or string you would like to check is a palindrome or not ")
st = st.lower()
st_rev = st[::-1]

if st == st_rev:
    print("It is a palindrome")
else:
    print("It is not a palindrome")