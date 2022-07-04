def n_is_p(n):
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            sum += i

    if sum == n:
        return True

    return False


def main():
    n = int(input())
    print("true" if n_is_p(n) else "false")


if __name__ == "__main__":
    main()
