for _ in range(int(input())):
    n = int(input())
    if n >= 1:
        print(9, end='')
    if n >= 2:
        print(8, end='')
    if n >= 3:
        print(9, end='')
    curr = 0
    for i in range(n - 3):
        print(curr, end='')
        curr = (curr + 1) % 10
    print()