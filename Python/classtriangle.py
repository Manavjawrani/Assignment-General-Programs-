class triangle():
    def __init__(self,a,b,c):
        self.a=a
        self.b=b
        self.c=c
        
    def perimeter(self):
         return self.a+self.b+self.c

t1 = triangle(3,4,5)
print(t1.perimeter())
