a = []
for _ in range(10101010):
  a.append([0 for _ in range(101010)])
  a[-1][0] = -1
  a[-1][-1] = -2
print(a)