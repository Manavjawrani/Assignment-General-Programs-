import turtle
import tkinter as tk
from math import acos, degrees


def do_stuff():
    screen = turtle.Screen()
    screen.screensize(canvwidth=1200, canvheight=600)
    screen.bgcolor("white")
    canvas = screen.getcanvas()
    label1 = tk.Label(canvas.master, text = '1st Side', font=('calibre',10, 'bold'))
    side1 = tk.Entry(canvas.master, text = 'uss', font=('calibre',10, 'bold'))
    label2 = tk.Label(canvas.master, text = '2nd Side', font=('calibre',10, 'bold'))
    side2 = tk.Entry(canvas.master, text = 'Us', font=('calibre',10, 'bold'))
    label3 = tk.Label(canvas.master, text = '3rd Side', font=('calibre',10, 'bold'))
    side3 = tk.Entry(canvas.master, text = 'u', font=('calibre',10, 'bold'))
    button = tk.Button(canvas.master, text="Calculate Area", command=press)

    label4 = tk.Label(canvas.master, text = 'Angle 1', font=('calibre',10, 'bold'))
    label5 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label6 = tk.Label(canvas.master, text = 'Angle 2', font=('calibre',10, 'bold'))
    label7 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label8 = tk.Label(canvas.master, text = 'Angle 3', font=('calibre',10, 'bold'))
    label9 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))


    label10 = tk.Label(canvas.master, text = 'Area', font=('calibre',10, 'bold'))
    label11 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label12 = tk.Label(canvas.master, text = 'Perimeter', font=('calibre',10, 'bold'))
    label13 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label14 = tk.Label(canvas.master, text = 'Type', font=('calibre',10, 'bold'))
    label15 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
 

    canvas.create_window(200, -160, window=button)
    canvas.create_window(70, -280, window=label1)
    canvas.create_window(200, -280, window=side1)

    canvas.create_window(70, -240, window=label2)
    canvas.create_window(200, -240, window=side2)
    canvas.create_window(200, -240, window=side2)

    canvas.create_window(70, -200, window=label3)
    canvas.create_window(200, -200, window=side3)
    canvas.create_window(200, -200, window=side3)

    canvas.create_window(200, -100, window=label4)
    canvas.create_window(200, -60, window=label5)
    canvas.create_window(200, -20, window=label6)
    canvas.create_window(200, 20, window=label7)
    canvas.create_window(200, 60, window=label8)
    canvas.create_window(200, 100, window=label9)

    canvas.create_window(400, -100, window=label10)
    canvas.create_window(400, -60, window=label11)
    canvas.create_window(400, -20, window=label12)
    canvas.create_window(400, 20, window=label13)
    canvas.create_window(400, 60, window=label14)
    canvas.create_window(400, 100, window=label15)
    turtle.penup()
    turtle.forward(-170)
    turtle.pendown()
    A=(int(side1.get())*10)
    B=(int(side2.get())*10)
    C=(int(side3.get())*10)
    angle1=degrees(acos((C * C + B * B - A * A)/(2.0 * B * C)))
    angle2=degrees(acos((C * C + A * A - B * B)/(2.0 * A * C)))
    angle3=degrees(acos((A * A + B * B - C * C)/(2.0 * A * B)))
    turtle.backward(A)
    turtle.left(angle3)
    turtle.forward(B)
    turtle.right(angle3+angle2)
    turtle.forward(C)
    A=A/10
    B=B/10
    C=C/10
    label5.config(text=angle1)
    label7.config(text=angle2)
    label9.config(text=angle3)
    s=int((A+B+C)/2)
    area=(s*(s-A)*(s-B)*(s-C))**(1/2)
    peri=A+B+C
    label11.config(text=area)
    label13.config(text=peri)
    if(A==B==C):
        type="Equilateral Triangle"
    elif(A==B):
        type="Isosceles Triangle"
    elif(B==C):
        type="Isosceles Triangle"
    elif(angle1==90 or angle2==90 or angle3==90):
        type="Right Angled Triangle"
    elif((A!=B)&(B!=C)&(A!=C)):
        type="Scalen Triangle"
    

    label15.config(text=type)


def do_stuff1():
    screen = turtle.Screen()
    screen.screensize(canvwidth=1200, canvheight=600)
    screen.bgcolor("white")
    canvas = screen.getcanvas()
    label1 = tk.Label(canvas.master, text = 'Enter Side of Square', font=('calibre',10, 'bold'))
    side1 = tk.Entry(canvas.master, text = 'uss', font=('calibre',10, 'bold'))
    button = tk.Button(canvas.master, text="Calculate Area", command=press1)

    label4 = tk.Label(canvas.master, text = 'Angle 1', font=('calibre',10, 'bold'))
    label5 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label6 = tk.Label(canvas.master, text = 'Angle 2', font=('calibre',10, 'bold'))
    label7 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label8 = tk.Label(canvas.master, text = 'Angle 3', font=('calibre',10, 'bold'))
    label9 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label10 = tk.Label(canvas.master, text = 'Angle 4', font=('calibre',10, 'bold'))
    label11 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))

    label12 = tk.Label(canvas.master, text = 'Area', font=('calibre',10, 'bold'))
    label13 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label14 = tk.Label(canvas.master, text = 'Perimeter', font=('calibre',10, 'bold'))
    label15 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
 

    canvas.create_window(200, -160, window=button)
    canvas.create_window(20, -280, window=label1)
    canvas.create_window(200, -280, window=side1)

    canvas.create_window(200, -100, window=label4)
    canvas.create_window(200, -60, window=label5)
    canvas.create_window(200, -20, window=label6)
    canvas.create_window(200, 20, window=label7)
    canvas.create_window(200, 60, window=label8)
    canvas.create_window(200, 100, window=label9)

    canvas.create_window(400, -100, window=label10)
    canvas.create_window(400, -60, window=label11)
    canvas.create_window(400, -20, window=label12)
    canvas.create_window(400, 20, window=label13)
    canvas.create_window(400, 60, window=label14)
    canvas.create_window(400, 100, window=label15)
    turtle.penup()
    turtle.forward(-170)
    turtle.pendown()
    A=(int(side1.get())*10)
    angle1=90
    angle2=90
    angle3=90
    angle4=90
    turtle.backward(A)
    turtle.left(angle1)
    turtle.forward(A)
    turtle.right(angle2)
    turtle.forward(A)
    turtle.right(angle3)
    turtle.forward(A)
    turtle.right(angle4)
    turtle.forward(A)
    A=A/10
    label5.config(text=angle1)
    label7.config(text=angle2)
    label9.config(text=angle3)
    area=A*A
    peri=4*A
    label11.config(text=angle4)
    label13.config(text=area)
    label15.config(text=peri)


def do_stuff2():
    screen = turtle.Screen()
    screen.screensize(canvwidth=1200, canvheight=600)
    screen.bgcolor("white")
    canvas = screen.getcanvas()
    label1 = tk.Label(canvas.master, text = 'Enter length of the rectangle', font=('calibre',10, 'bold'))
    side1 = tk.Entry(canvas.master, text = 'uss', font=('calibre',10, 'bold'))
    label2 = tk.Label(canvas.master, text = 'Enter breadth of the rectangle', font=('calibre',10, 'bold'))
    side2 = tk.Entry(canvas.master, text = 'us', font=('calibre',10, 'bold'))
    button = tk.Button(canvas.master, text="Calculate Area", command=press2)

    label4 = tk.Label(canvas.master, text = 'Angle 1', font=('calibre',10, 'bold'))
    label5 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label6 = tk.Label(canvas.master, text = 'Angle 2', font=('calibre',10, 'bold'))
    label7 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label8 = tk.Label(canvas.master, text = 'Angle 3', font=('calibre',10, 'bold'))
    label9 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label10 = tk.Label(canvas.master, text = 'Angle 4', font=('calibre',10, 'bold'))
    label11 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))

    label12 = tk.Label(canvas.master, text = 'Area', font=('calibre',10, 'bold'))
    label13 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
    label14 = tk.Label(canvas.master, text = 'Perimeter', font=('calibre',10, 'bold'))
    label15 = tk.Label(canvas.master, text = '', font=('calibre',10, 'bold'))
 

    canvas.create_window(200, -160, window=button)
    canvas.create_window(30, -280, window=label1)
    canvas.create_window(200, -280, window=side1)
    canvas.create_window(30, -240, window=label2)
    canvas.create_window(200, -240, window=side2)

    canvas.create_window(200, -100, window=label4)
    canvas.create_window(200, -60, window=label5)
    canvas.create_window(200, -20, window=label6)
    canvas.create_window(200, 20, window=label7)
    canvas.create_window(200, 60, window=label8)
    canvas.create_window(200, 100, window=label9)

    canvas.create_window(400, -100, window=label10)
    canvas.create_window(400, -60, window=label11)
    canvas.create_window(400, -20, window=label12)
    canvas.create_window(400, 20, window=label13)
    canvas.create_window(400, 60, window=label14)
    canvas.create_window(400, 100, window=label15)
    turtle.penup()
    turtle.forward(-170)
    turtle.pendown()
    A=(int(side1.get())*10)
    B=(int(side2.get())*10)
    angle1=90
    angle2=90
    angle3=90
    angle4=90
    turtle.backward(A)
    turtle.left(angle1)
    turtle.forward(B)
    turtle.right(angle2)
    turtle.forward(A)
    turtle.right(angle3)
    turtle.forward(B)
    turtle.right(angle4)
    turtle.forward(A)
    A=A/10
    B=B/10
    label5.config(text=angle1)
    label7.config(text=angle2)
    label9.config(text=angle3)
    area=A*B
    peri=2*(A+B)
    label11.config(text=angle4)
    label13.config(text=area)
    label15.config(text=peri)




def press():
    button1.destroy()
    button2.destroy()
    button3.destroy()
    do_stuff()

def press1():
    button1.destroy()
    button2.destroy()
    button3.destroy()
    do_stuff1()

def press2():
    button1.destroy()
    button2.destroy()
    button3.destroy()
    do_stuff2()


if __name__ == "__main__":
    screen = turtle.Screen()
    screen.screensize(canvwidth=1200, canvheight=600)
    screen.bgcolor("white")
    canvas = screen.getcanvas()
    button1 = tk.Button(canvas.master, text="Calculate Area of Triangle", command=press)
    canvas.create_window(200, -160, window=button1)
    button2 = tk.Button(canvas.master, text="Calculate Area of Square", command=press1)
    canvas.create_window(200, -120, window=button2)
    button3 = tk.Button(canvas.master, text="Calculate Area of Rectangle", command=press2)
    canvas.create_window(200, -80, window=button3)
    turtle.done()