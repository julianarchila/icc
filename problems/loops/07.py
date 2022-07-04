n: float = float(input())

buff = 1
counter = 0


while True:
    counter += 1
    buff = buff * (1 + n)
    if buff >= 2:
        break

print(counter)
