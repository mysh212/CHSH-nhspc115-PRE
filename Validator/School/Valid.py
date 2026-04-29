# Author : ysh
# 2026/04/28 Tue 11:42:00
n = int(input())
f = [[int(j) for j in input().split()] for _ in range(n)]

assert(1 <= n <= 2 * (10 ** 5))
for x, y in f:
    assert(-10 ** 9 <= x <= 10 ** 9)
    assert(-10 ** 9 <= y <= 10 ** 9)

quit()