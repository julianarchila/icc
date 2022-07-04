n = int(input())

fifty = 0
twenty = 0
ten = 0

while True:
    if n == 0:
        break

    if n - 50000 >= 0:
        n -= 50000
        fifty += 1
    elif n - 20000 >=0:
        n -= 20000
        twenty += 1
    elif n - 10000 >= 0:
        n -= 10000
        ten += 1

print(fifty)
print(twenty)
print(ten)
