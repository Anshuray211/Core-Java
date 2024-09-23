

from turtle import*
import colorsys
bgcolor('black')
tracer(500)

def draw():
    h=0
    for i in range(100):
        c= colorsys.hsv_to_rgb(h,1,1)
        h += 0.5
        up()
        goto(0,0)
        down()
        color
