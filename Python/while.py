# Command for running this script
# python '.\Flow Control\while.py'

count = 100

# while loop continues to loop its body untill the provided condition remains True
while(count>=0):
    if count%10 == 0:
        print("Countdown has reached",count)
    count = count-1