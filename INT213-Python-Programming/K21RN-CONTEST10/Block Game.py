t = int(input())
for _ in range(t):
    x = input()
    rev = x[::-1]
    if x == rev:
        print("wins")
    else:
        print("loses")