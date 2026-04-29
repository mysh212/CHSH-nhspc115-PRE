# Author : ysh
# 2026/04/28 Tue 11:34:03
import sys

input = sys.stdin.readline
print = sys.stdout.write

f = [[int(j) for j in input().split()] for _ in range(int(input()))]

ans = 0
f.append([0, 0])
x, y = 0, 0
for nx, ny in f:
    ans += abs(nx - x) + abs(ny - y)
    x, y = nx, ny

print(f'{ans}')
quit()