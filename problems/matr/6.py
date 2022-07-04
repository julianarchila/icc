def main():
    n = int(input())

    lst = []

    for _ in range(n):
        i = int(input())
        lst.append(i)

    lst.sort()
    print(lst)


if __name__ == "__main__":
    main()
