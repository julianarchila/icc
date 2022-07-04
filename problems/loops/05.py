n: int = int(input())
if (n % 5 != 0):
    print("error")
    exit()

for i in range(5,n+1,5):
    print(i)
