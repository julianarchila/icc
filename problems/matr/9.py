def main():
    x = int(input())
    n = int(input())

    nums = []

    for i in range(n):
        buff = int(input())
        if i % x != 0:
            nums.append(buff)

    print(nums)


if __name__ == "__main__":
    main()
