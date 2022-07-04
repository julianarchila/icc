x = float(input("X: "))
y = float(input("y: "))

m = float(input("Pendiente (m): "))
b = float(input("Intersecto (b): "))


a = m

distance = abs(a*x - y + b) / (a**2 + 1)**0.5

print(f"La distancia es: {distance:.3f}")


