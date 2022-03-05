# Command for running this script
# python .\Functions\In-built.py

a = list(range(10))

# len() function returns the length of the list
print("Length of list a =", len(a), "\n")

# type() function returns the data type of variable
print("Type:", type(a), "\n")

five_in_a = []
for num in a:
    if num==5:
        five_in_a.append(True)
    else:
        five_in_a.append(False)

# any() function returns True if there is at least one True element in the list
if any(five_in_a):
    print("There is at least one element = 5 in the list \n")

less_than_50 = []
for num in a:
    if num<50:
        less_than_50.append(True)
    else:
        less_than_50.append(False)

# all() function returns True only if all the elements in the list are True
if all(less_than_50):
    print("All numbers in a are less than 50 \n")