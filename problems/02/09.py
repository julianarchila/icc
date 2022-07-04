tp = int(input())
td = int(input())

cumple_a = td < 200
cumple_b = tp > 10000

if cumple_a and cumple_b:
    print(4)
elif cumple_b:
    print(3)
elif cumple_a:
    print(2)
else:
    print(1)

