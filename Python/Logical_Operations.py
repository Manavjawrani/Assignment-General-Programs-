# Command for running this script
# python .\Basics\Logical_Operations.py

a = True
b = False

c = a or b
print("c =", c, "\n")

d = a and b
print("d =", d, "\n")

e = not a
print("e =", e, "\nType: ", "\n")

f = (not a) and b and (c or d)
print("f =", f, "\n")

# Run the function by changing the logical values of a and b
# Try playing around the expression of f by making more complex boolean expressions