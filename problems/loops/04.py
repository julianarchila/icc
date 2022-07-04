n = int(input())
par = n % 2 == 0

s = 1

plus_4 = True

print(1)

while True:
    if plus_4:
        s += 4
        plus_4 = False
    else:
        s -= 2
        plus_4 = True 

    print(s)

    if (not par and s == n):
        break

    if (par and s == n - 1):
        break
