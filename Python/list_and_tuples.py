a = [1,2,3,4,5,6,7]

print("a =", a)
print("Length of a =", len(a))
print("4th element of a =", a[3], "\n")

# Element-wise modification of list
a[3] = 1000
print("Modified List 1 =", a, "\n")

# Element-wise access and modification of list
a[5] = a[5]**5
print("Modified List 2 =", a, "\n")

# Appending an element at the end of list
a.append(500)
print("Modified List 3 =", a, "\n")

# A list can also contain string elements
b = ["cat","dog","elephant"]
print("b =", b, "\n")

# Extending a list by appending a list by another list. A list can contain different kinds of data types as well
a.extend(b)
print("Modified List 4 =", a, "\n")

# Deleting elements from a list
del a[9]
print("Modified List 5 =", a, "\n")

# Accessing a slice of the list from index 3 to 7
print("Slice of the list =", a[3:9], "\n")