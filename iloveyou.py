import turtle

t = turtle.Turtle()
s = turtle.Screen()

s.bgcolor('black')
t.hideturtle()
t.goto(0,-10)

t.pensize(4)
t.color('red')
t.begin_fill()
t.left(140)
t.forward(180)
t.circle(-90,200)
t.setheading(60)
t.circle(-90,200)
t.forward(178)
t.end_fill()

t.penup()
t.goto(-100,170)
t.pendown()
t.color('white')
t.write("I Love Anshu Ji", font=("Verdana",20,"bold"))

t.penup()
t.goto(-150,210)
t.pendown()
t.color('black')
t.write("Coding :-", font=("Verdana",15,"bold"))


t.penup()
t.goto(-90,100)
t.pendown()
t.color('black')
t.write("Love You meri JAN",font=("Verdana",16,"bold"))

t.penup()
t.goto(-150,130)
t.pendown()
t.color('black')
t.write("Anshu :-",font=("Verdana",15,"bold"))






turtle.done()
