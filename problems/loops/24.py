def factorial(n):
    if n <= 1:
        return 1

    return n * factorial(n - 1)


def main():
    n = int(input())
    sum = 0
    for i in range(n + 1):
        sum += ((-1) ** i) / factorial(i)

    res = factorial(n) * sum
    print(int(res))


if __name__ == "__main__":
    main()
