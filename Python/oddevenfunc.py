num=int(input("Enter a number for check odd or even: "))
def find_Evenodd(num):  
    
    if (num&1==1):
        print(num, "is an odd number");
    else:
        print(num, "is an even number");
find_Evenodd(num); 