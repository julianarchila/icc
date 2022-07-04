import math
r = int(input())
h = int(input())

g = math.sqrt(r**2 + h**2)

area = math.pi*g*r

volume = 1/3*math.pi*(r**2)*h
print(f"{area:.2f}")
print(f"{volume:.2f}")
