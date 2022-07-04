n = int(input())

buff = 1

for i in range(n, 1, -2):
    buff = i * buff

print(buff)
