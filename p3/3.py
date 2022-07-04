def sec_jacb(n: int) -> int:
    if n <= 1:
        return n

    return sec_jacb(n - 1) + 2 * sec_jacb(n - 2)


def main():
    n = int(input())
    print(sec_jacb(n))


if __name__ == "__main__":
    main()
