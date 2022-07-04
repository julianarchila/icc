# center
x1 = float(input())
y1 = float(input())

#radius
r = float(input())

#point
x2 = float(input())
y2 = float(input())

#distance between point and center is the same as the radius
d = (x2 - x1) ** 2 + (y2 - y1) ** 2 
is_on = d == r ** 2
is_in = d < r ** 2

if is_on or is_in:
    print("yes")
else:
    print("no")




