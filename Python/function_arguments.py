# Command for running this script
# python .\Functions\function_arguments.py

# Function printName takes in an argument and greets that person with a Hello
def printName(name):
    print("Hello", name)
    return

printName("Tom")

# Funtion add takes in two arguments and returns their sum
def add(a, b):
    c = a+b
    return c

# Function multiply takes in two arguments and returns their products
def multiply(a, b):
    return a*b

a = 100
b = 200

print("\na+b =", add(a,b))

print("\na*b =", multiply(a,b))