def factorial(n):
    buff = 1
    for i in range(1, n + 1):
        buff *= i

    return buff


def comb(n, x):
    nf = factorial(n)
    xf = factorial(x)
    n_xf = factorial(n - x)

    return nf / (xf * n_xf)


def main():
    n = int(input())
    x = int(input())

    print(int(comb(n, x)))


if __name__ == "__main__":
    main()
