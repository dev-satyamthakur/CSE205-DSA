n = int(input())
dict = {}
for _ in range(n):
    s = input()
    if dict.get(s) != None:
        dict[s] += 1
    else:
        dict[s] = 1

print(len(dict))
for i in dict:
    print(dict.get(i), end=" ")