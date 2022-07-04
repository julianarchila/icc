ax = float(input())
ay = float(input())

bx = float(input())
by = float(input())

cx = float(input())
cy = float(input())

dx = float(input())
dy = float(input())


pendiente_am = abs(by - ay) / abs(bx - ax)
pendiente_cd = abs(dy - cy) / abs(dx - cx)


if pendiente_am != pendiente_cd:
    print("true")
else:
    print("false")

