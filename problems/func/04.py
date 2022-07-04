n = int(input())


def p(n):
    if n in [0, 1, 2]:
        return 1

    return p(n - 2) + p(n - 3)


print(p(n))
