import math
heigh = float(input())
weight = float(input())


mosteller = math.sqrt(heigh * weight / 3600)
dubois = 0.007184 * weight**0.425 * heigh**0.725
gng = 0.0235 * weight**0.51456 * heigh**0.42246


print(f"{mosteller:.2f}")
print(f"{dubois:.2f}")
print(f"{gng:.2f}")
