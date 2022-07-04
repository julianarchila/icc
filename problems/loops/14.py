a = int(input())
b = int(input())

for i in range(a, b):
    if i % 7 == 0 or i % 5 == 0:
        print(i)
