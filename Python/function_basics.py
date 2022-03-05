# Command for running this script
# python .\Functions\function_basics.py

# Function Definition
def myFunc(): #----> Function name      
                    
                    #-----|
    print("Hello World") #|----> Body of the function
                    #-----|
    
    return #----> return statement

# Function Call
myFunc()

# Function can be called as many times as we want.
for i in range(10):
    print("\nFunction Call", i)
    myFunc()