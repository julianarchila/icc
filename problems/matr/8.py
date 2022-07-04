def main():
    n = int(input())

    lst = []

    for _ in range(n):
        i = int(input())
        lst.append(i)
    lst.sort()

    prom = sum(lst) / n

    new_list = [x for x in lst if x > prom]

    print(new_list)


if __name__ == "__main__":
    main()
