from itertools import groupby
s = input().strip()
for i, g in groupby(s):
    print((len(list(g)), int(i)), end=" ")