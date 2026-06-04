for _ in range(int(input())):
    n = int(input())
    k = 1
    for i in range(1,n+1):
        print(k * (k+2), end=" ")
        k += 2
    print()