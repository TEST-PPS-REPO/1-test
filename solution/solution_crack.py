import sys
inp = sys.stdin.read()

for i in range(100):
  with open('./IO/in_{:04d}.txt'.format(i)) as f:
    if f.read() == inp:
      with open('./IO/out_{:04d}.txt'.format(i)) as f2:
        print(f2.read())