# Encuentre el volumen y el área de la superficie de un cono truncado.


# ENTRADA
# El radio de la base, el radio de la tapa y la altura del cono como enteros.


# SALIDA
# El area superficial y el volumen del cono truncado separados por un cambio de linea con dos cifras decimales.

import math

R = int(input("Ingrese el radio de la base: "))
r = int(input("Ingrese el radio de la tapa: "))
h = int(input("Ingrese la altura del cono: "))

g = math.sqrt(h**2 + (R-r)**2)
pi = math.pi


area = pi*(R+r)*g  + pi*r**2

volumen = (1/3)*pi*h*(R**2 + r**2 + R*r)


print("El area superficial es:", round(area, 2))
print("El volumen del cono truncado es:", round(volumen, 2))
