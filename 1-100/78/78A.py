a, b, c = input(), input(), input()
ca, cb, cc = 0, 0, 0
for i in range(len(a)):
    ca = ca + (1 if a[i] in 'aeiou' else 0)
for i in range(len(b)):
    cb = cb + (1 if b[i] in 'aeiou' else 0)
for i in range(len(c)):
    cc = cc + (1 if c[i] in 'aeiou' else 0)
print("YES" if (ca == 5 and cb == 7 and cc == 5) else "NO")