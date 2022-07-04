def main():
    n = int(input())

    ss = ""

    for i in range(n, 0, -1):
        ss += str(i)
        if i != 1:
            ss += "-"

    print(ss)


if __name__ == "__main__":
    main()
