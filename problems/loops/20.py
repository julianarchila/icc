def es_primo(n: int):
    c = 0
    for i in range(1, n + 1):
        if n % i == 0:
            c += 1

    return True if c == 2 else False


def main():
    n = int(input())
    prev = 1
    next = 1

    for i in range(n - 1, 1, -1):
        if es_primo(i):
            prev = i
            break

    print("Prev :", prev)

    counter = n + 1
    while True:
        if es_primo(counter):
            next = counter
            break
        counter += 1

    print("Next: ", next)

    if (prev + next) / 2 < n:
        print("Primo Fuerte")
    else:
        print("No es Primo Fuerte")


if __name__ == "__main__":
    main()
