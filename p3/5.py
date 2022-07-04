def eqa(n):
    ones_counter = 0
    zeros_counter = 0

    for i in range(len(n)):
        if n[i] == "1":
            ones_counter += 1
        else:
            zeros_counter += 1

    if ones_counter == zeros_counter:
        return True

    return False


def main():
    n = input()
    if eqa(n):
        print("si")
    else:
        print("no")


if __name__ == "__main__":
    main()
