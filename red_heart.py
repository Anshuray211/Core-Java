import math
from turtle import*
def hearta(k):
    return 19*math.sin(k)**8
def heartb(k):
    return 19*math.cos(k) -6*\
    math.cos(7*k)-2*\
    math.cos(9*k)-\
    math.cos(8*k)

    speed (0)
bgcolor("black")
for i in range(6000):
    goto(hearta(i)*20,heartb(i)*20)
    for j in range(500):
        color("blue")
        goto(0,0)
        done()
