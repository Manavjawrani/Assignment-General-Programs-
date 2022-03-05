# Command for running this script
# python '.\Flow Control\if-else.py'

x = 5
y = 100

print("'x > y' results in", x>y, "\n")

if x>y:
    print(x,"is greater than",y, "\n")
else:
    print(y,"is greater than",x, "\n")

if x==y:
    print(x,"is equal to",y, "\n")
else:
    print(x,"is not equal to",y, "\n")

c = 20
d = 20

if x>y and c==d:
    print("x is greater than y and c is equal to d")
elif c==d:
    print("c is equal to d but x is not greater than y")
elif x>y:
    print("x is greater than y but c is not equal to d")
else:
    print("x is not greater than y and c is not equal to d")

# Try to play around with the conditions in the if statement.